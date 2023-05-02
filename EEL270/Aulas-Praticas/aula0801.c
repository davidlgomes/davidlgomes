
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de validacao PIS/PASEP
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 06:11:59 $
 * $Log: aula0801.c,v $
 * Revision 1.2  2020/10/22 06:11:59  david.lopes
 * aula0801.c
 *
 * Revision 1.1  2020/10/22 05:32:26  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:08  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/02 20:59:06  david.lopes
 * Initial revision
 *
 *
 * */
#include<stdio.h>
#include<string.h>
#include "aula08.h"
#define BASE64				"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/="
#define PADDING	               		'='	
#define	EOS				'\0'				
#define COMPRIMENTO_MAXIMO_ENTRADA_CODIFICADOR 1024
#define COMPRIMENTO_MAXIMO_ENTRADA_DECODIFICADOR 1368

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida){
	unsigned indiceEntrada=0;
	unsigned indiceSaida=0;
	unsigned contador=0;
	if (!entrada)
		return entradaNULL;
	if(!saida)
		return saidaNULL;
	if(numeroBytes>COMPRIMENTO_MAXIMO_ENTRADA_CODIFICADOR)
		return erroComprimentoEntrada;
	for(indiceSaida=0; indiceSaida<COMPRIMENTO_MAXIMO_ENTRADA_DECODIFICADOR; indiceSaida++)
		saida[indiceSaida]=EOS;
	
	
	indiceSaida=0;
	indiceEntrada=0;
	while(indiceEntrada<numeroBytes){
		if((numeroBytes-indiceEntrada>3)||(numeroBytes-indiceEntrada>0)){
		
			saida[0+indiceSaida] = BASE64[(entrada[0+indiceEntrada]>>2)&0x3F];
			saida[1+indiceSaida]=  BASE64[((entrada[0+indiceEntrada]<<4)&0x30) | ((entrada[1+indiceEntrada]>>4)&0x0F)];
			saida[2+indiceSaida] = BASE64[((entrada[1+indiceEntrada]<<2)&0x3C) | ((entrada[2+indiceEntrada]>>6)&0x03)];
			saida[3+indiceSaida] = BASE64[entrada[2+indiceEntrada]&0x3F];
		
		}	

		
	
		if(numeroBytes-indiceEntrada==2){
		
			saida[0+indiceSaida] = BASE64[(entrada[0+indiceEntrada]>>2)&0x3F];
			saida[1+indiceSaida] = BASE64[((entrada[0+indiceEntrada]<<4)&0x30) | ((entrada[1+indiceEntrada]>>4)&0x0F)];
			saida[2+indiceSaida] = BASE64[((entrada[1+indiceEntrada]<<2)&0x3C)];
			saida[3+indiceSaida] = '=';
		
		}
		
		
	
		if(numeroBytes-indiceEntrada==1){
		
			saida[0+indiceSaida] = BASE64[(entrada[0+indiceEntrada]>>2)&0x3F];
			saida[1+indiceSaida] = BASE64[(entrada[0+indiceEntrada]<<4)&0x30];
			saida[2+indiceSaida] = '=';
			saida[3+indiceSaida] = '=';
			
		

		}	
		indiceSaida+=4;
		contador+=4;
		indiceEntrada+=3;
		
		if(contador==76){
			contador=0;
			saida[0+indiceSaida]= '\r';
			saida[1+indiceSaida]= '\n';
			indiceSaida+=2;
		}
		
	}
	saida[indiceSaida]=EOS;	
	return ok;
}

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes){
	unsigned indice;
	unsigned indice1;
	unsigned indiceEntrada;
	unsigned indiceSaida;
	unsigned contador=0;
	indiceEntrada=0;	
	indiceSaida=0;
	
	if(!entrada)
		return entradaNULL;
	if(!saida)
		return saidaNULL;
	if(strlen(entrada)>COMPRIMENTO_MAXIMO_ENTRADA_DECODIFICADOR)
		return comprimentoEntradaInvalido;
	while((strlen(entrada)-indiceEntrada)>=4){

		for(indice=0; indice<4; indice++){
			for(indice1=0; indice1<64; indice1++){
				if(entrada[indice+indiceEntrada]==BASE64[indice1]){
					entrada[indice+indiceEntrada] = indice1;
					contador++;
				}
			}
			if(contador==0)
				return caractereBase64Invalido;
			
		}	

		saida[0+indiceSaida] = (((entrada[0+indiceEntrada]<<2)&0xFC)|((entrada[1+indiceEntrada]>>4)&0x03));
				
		saida[1+indiceSaida] = (((entrada[1+indiceEntrada]<<4)&0xF0)|((entrada[2+indiceEntrada]>>2)&0x0F));
				
		saida[2+indiceSaida] = (((entrada[2+indiceEntrada]<<6)&0xFC)|((entrada[3+indiceEntrada])&0x3F));			
			
		indiceEntrada+=4;
		contador+=4;
		indiceSaida+=3;
		if(contador==76){
			contador=0;
			indiceEntrada+=2;
		}
	}
			

	if(entrada[indiceEntrada+2]==PADDING){
		saida[indiceSaida]=(((entrada[indiceEntrada+0]<<2)&0xFC)|((entrada[indiceEntrada+1]>>4)&0x03));
		saida[indiceSaida+1]=EOS;
	}
	if(entrada[indiceEntrada+2]==PADDING){
		saida[indiceSaida]=(((entrada[indiceEntrada+0]<<2)&0xFC)|((entrada[indiceEntrada+1]>>4)&0x03));
		saida[indiceSaida+1]=(((entrada[indiceEntrada+1]<<4)&0xF0)|((entrada[indiceEntrada+1]>>2)&0x0F));
		saida[indiceSaida+2]=EOS;

	}	
		
	*numeroBytes=indiceSaida;
		
	return ok;
}

/*$RCSfile: aula0801.c,v $*/
