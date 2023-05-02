/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 06:23:47 $
 * $Log: aula0806.c,v $
 * Revision 1.1  2020/10/22 06:23:47  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 *

 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<getopt.h>
#include "aula08.h"


#define	OK				0	
#define	ARGUMENTO_INVALIDO		4	
#define	ERRO_VALIDACAO			2
#define	NUMERO_ARGUMENTO_INVALIDO	3
#define NUMERO_ARGUMENTOS_ARQUIVOS	3
#define ARQUIVOS_DEVEM_SER_DIFERENTES	5
#define	COMPRIMENTO_MAXIMO_BUFFER	500
int main(int argc, char **argv){
	unsigned teste;
	if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
		printf("\n%s: <a1><a2>", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	
	if(!strcmp(argv[1], argv[2])){
		exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
	}
	teste=ConverterArquivoFormatoDosFormatoUnix(argv[1], argv[2]);

	if(teste!=0)
		printf("\n%d\n", teste);
	else
		printf("\nArquivo convertido com sucesso\n");
			
		
	return OK;
}
/*$RCSfile: aula0806.c,v $*/
