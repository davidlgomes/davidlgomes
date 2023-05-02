
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
 * $Date: 2020/10/22 06:25:17 $
 * $Log: aula0807.c,v $
 * Revision 1.2  2020/10/22 06:25:17  david.lopes
 * aula0807.c
 *
 * Revision 1.1  2020/10/22 05:39:29  david.lopes
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

#define	COMPRIMENTO_MAXIMO_BUFFER	500

tipoErros
ExibirConteudoArquivo (char *original){
	byte bufferOffset[80];
	unsigned indice;
	byte chamadaOffsetFinal;
	unsigned offsetFinal, offsetInicio;
	offsetInicio=0;
	offsetFinal=0;
	chamadaOffsetFinal=0;
	if(!original)
		return originalNull;
	FILE *arquivoAberto;
	arquivoAberto=fopen(original, "rb");
	if(!arquivoAberto)
		return arquivoOriginalNull;
	chamadaOffsetFinal=fread(bufferOffset, sizeof(byte), 10, arquivoAberto);
	offsetFinal+=chamadaOffsetFinal;
	while(chamadaOffsetFinal>0){
		
		printf("%d-%d ", offsetInicio,offsetFinal);
        	for(indice=0; indice<chamadaOffsetFinal; indice++)
			printf("%02X ", bufferOffset[indice]);
		
       		for(indice=0; indice<chamadaOffsetFinal; indice++){
			if((bufferOffset[indice]>=0x20)&&(bufferOffset[indice]<0x7F))
				printf("%c ", bufferOffset[indice]);

			else
				printf(". ");
		}
		offsetInicio=offsetFinal;
		chamadaOffsetFinal =(unsigned) fread(bufferOffset, sizeof(byte), 10, arquivoAberto);
		offsetFinal+=chamadaOffsetFinal;
		
	printf("\n");
	printf("\n");	
	}	
	fclose(arquivoAberto);
	return ok;
}


/*$RCSfile: aula0807.c,v $*/
