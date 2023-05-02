/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <nome completo>
 * Descricao: <descrição sucinta dos objetivos do programa>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/09 03:01:27 $
 * $Log: aula0202.c,v $
 * Revision 1.2  2020/09/09 03:01:27  david.lopes
 * aula0202.c
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "aula0201.h"
int main(int argc, char** argv){
	ull primeiroTermo, segundoTermo;
	char *validacao;
	if(argc!=QUANTIDADE_ARGUMENTOS){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1> <a2> <a3>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}
	if(argv[1][0]=='-'){
		printf("\nApenas valores positivos validos\n");
		exit(PRIMEIRO_CARACTERE_PRIMEIRO_TERMO_INVALIDO);
	}
	if(argv[2][0]=='-'){
		printf("\nApenas valores positivos validos\n");
		exit(PRIMEIRO_CARACTERE_SEGUNDO_TERMO_INVALIDO);
	}
	primeiroTermo = strtoull(argv[1], &validacao, 10);
	if(*validacao!=EOS){
		printf("\nprimeiro Termo tem um Caractere Invalido: %c\n", *validacao);
		exit(PRIMEIRO_TERMO_INVALIDO);
	}
	segundoTermo = strtoull(argv[2], &validacao, 10);
	if(*validacao!=EOS){
		printf("\nsegundo Termo tem um Caractere Invalido: %c\n", *validacao);
		exit(SEGUNDO_TERMO_INVALIDO);
	}
	
	printf("\nO valor do MDC é: %llu \n", CalcularMaximoDivisorComum(primeiroTermo, segundoTermo));
	
	return OK;
}
/*$RCSfile: aula0202.c,v $*/
