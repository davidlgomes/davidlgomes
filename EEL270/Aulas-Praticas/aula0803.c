/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 06:11:33 $
 * $Log: aula0803.c,v $
 * Revision 1.2  2020/10/22 06:11:33  david.lopes
 * aula0803.c
 *
 * Revision 1.1  2020/10/22 05:32:51  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 *

 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "aula08.h"
#define NUMERO_ARGUMENTOS 2
#define	EOS				'\0'	
#define	OK				0	
#define	ARGUMENTO_INVALIDO		4	
#define	ERRO_VALIDACAO			2
#define	NUMERO_ARGUMENTO_INVALIDO	3
int main(int argc, char **argv){
	unsigned int numeroBytes;
	unsigned indice;
	char entrada[1368];
	byte saida[1024];
	
	for(indice=0; indice<1024; indice++)
		entrada[indice]=EOS;
	
	for(indice=0; indice<1368; indice++)
		saida[indice]=EOS;
	
	if(argc!=NUMERO_ARGUMENTOS){
		printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	
	
	for(indice=0; indice<strlen(argv[1]); indice++){
		entrada[indice] = argv[1][indice];
	}
	if(DecodificarBase64(entrada, saida, &numeroBytes)!=OK)
		printf("\n%d\n", DecodificarBase64(entrada, saida, &numeroBytes));
	else{
		printf("\n%u\n", numeroBytes);
		for(indice=0; saida[indice]!=EOS; indice++)
			printf("%02X ", saida[indice]);
		printf("\n");
	}
	return OK;
}
/*$RCSfile: aula0803.c,v $*/
