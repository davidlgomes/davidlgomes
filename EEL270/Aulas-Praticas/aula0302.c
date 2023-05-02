/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <nome completo>
 * Descricao: <descrição sucinta dos objetivos do programa>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/10 05:03:59 $
 * $Log: aula0302.c,v $
 * Revision 1.2  2020/09/10 05:03:59  david.lopes
 * aula0302.c
 *
 * Revision 1.1  2020/09/09 03:10:54  david.lopes
 * Initial revision
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "aula0301.h"
int main(int argc, char** argv){
	unsigned short numeroTermo, indice;
	char *validacao;
	if(argc!=QUANTIDADE_ARGUMENTOS){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1> <a2>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}
	if(argv[1][0]=='-'){
		printf("\nApenas valores positivos validos\n");
		exit(PRIMEIRO_CARACTERE_PRIMEIRO_TERMO_INVALIDO);
	}
	
	numeroTermo = strtoull(argv[1], &validacao, 10);
	
	if(*validacao!=EOS){
		
		printf("\n O Termo tem um Caractere Invalido: %c\n", *validacao);
		exit(PRIMEIRO_TERMO_INVALIDO);
	
	}		
	for(indice=0; indice<=numeroTermo; indice++)
		printf("F(%u)�: %llu\n" ,indice, CalcularTermoSerieFibonacci(indice));
	
	return OK;
}
/*$RCSfile: aula0302.c,v $*/
