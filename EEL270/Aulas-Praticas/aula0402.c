/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da exponencial
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:33:45 $
 * $Log: aula0402.c,v $
 * Revision 1.1  2020/09/15 19:33:45  david.lopes
 * Initial revision
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "aula0401.h"
int main(int argc, char** argv){
	double base; 
	int expoente;
	char *validacao;

	if(argc!=QUANTIDADE_ARGUMENTOS){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1> <a2>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}

	base = strtod(argv[1], &validacao);
	
	if(*validacao!=EOS){
		
		printf("\n O Primeiro Termo tem um Caractere Invalido: %c\n", *validacao);
		exit(PRIMEIRO_TERMO_INVALIDO);
	
	}		

	expoente = strtol(argv[2], &validacao, 10);
	
	if(*validacao!=EOS){
		
		printf("\n O Segundo Termo tem um Caractere Invalido: %c\n", *validacao);
		exit(SEGUNDO_TERMO_INVALIDO);
	
	}		

	printf("\n%Lf\n",CalcularExponencial(base, expoente));
	
	return OK;
}
/*$RCSfile: aula0402.c,v $*/
