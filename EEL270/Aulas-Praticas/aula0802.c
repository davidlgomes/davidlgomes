/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 06:10:45 $
 * $Log: aula0802.c,v $
 * Revision 1.2  2020/10/22 06:10:45  david.lopes
 * aula0802.c
 *
 * Revision 1.1  2020/10/22 05:32:38  david.lopes
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
#define COMPRIMENTO_MAXIMO_ENTRADA 1024
#define COMPRIMENTO_MAXIMO_SAIDA 1368
#define	EOS				'\0'	
#define	OK				0	
#define	ARGUMENTO_INVALIDO		4	
#define	ERRO_VALIDACAO			2
#define	NUMERO_ARGUMENTO_INVALIDO	3
int main(int argc, char **argv){
	unsigned numeroBytes;
	unsigned indice;
	byte entrada[COMPRIMENTO_MAXIMO_ENTRADA];
	char saida[COMPRIMENTO_MAXIMO_SAIDA];
	char *validacao;
	
	
	numeroBytes = (unsigned)strtoul(argv[1], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nARGUMENTO_INVALIDO\n");
		exit(ARGUMENTO_INVALIDO);
	}
	if(argc!=numeroBytes+2){
		printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	for(indice=0; indice+2<argc; indice++){
		entrada[indice]= strtoul(argv[indice+2], &validacao, 16);
		if(*validacao!=EOS){
			printf("\nCaractere Invalido\n");
			exit(ARGUMENTO_INVALIDO);
		}

	}
	if(CodificarBase64(entrada, numeroBytes, saida)!=ok)	
		printf("%d\n", CodificarBase64(entrada, numeroBytes, saida));
	else
		for(indice=0; saida[indice]!=EOS; indice++)
			printf("%c", saida[indice]);
	printf("\n");
	return OK;

}
/*$RCSfile: aula0802.c,v $*/
