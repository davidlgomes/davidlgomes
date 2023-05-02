/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/09/22 21:57:17 $
 * $Log: aula0502.c,v $
 * Revision 1.1  2020/09/22 21:57:17  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/15 19:33:45  david.lopes
 * Initial revision
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "aula0501.h"
int main(int argc, char** argv){
	
	unsigned long int numero;
	char *validacao;

	if(argc!=QUANTIDADE_ARGUMENTOS_SERIE){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA_SERIE);
	}
	if(argv[1][0]=='-'){
		printf("\nApenas positivos validos\n");
		exit(NUMEROS_NEGATIVOS);
	}
	numero = strtoul(argv[1], &validacao, 10);
	
	if(*validacao!=EOS){
		
		printf("\n O numero tem um Caractere Invalido: %c\n", *validacao);
		exit(TERMO_INVALIDO);
	
	}		

	printf("\n%f\n", CalcularSerieHarmonicaAlternada(numero));
	
	return OK;
}
/*$RCSfile: aula0502.c,v $*/
