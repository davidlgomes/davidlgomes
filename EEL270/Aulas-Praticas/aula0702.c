/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/08 20:28:30 $
 * $Log: aula0702.c,v $
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 *

 */

#include<stdio.h>
#include<stdlib.h>
#include "aula0701.h"
int
main(int argc, char **argv){
	char *validacao;
	float matrizA[LINHAS_MATRIZ_A][COLUNAS_MATRIZ_A], matrizB[LINHAS_MATRIZ_B][COLUNAS_MATRIZ_B], matrizC[LINHAS_MATRIZ_C][COLUNAS_MATRIZ_C];
	unsigned linha, coluna;
	if(argc!=QUANTIDADE_ARGUMENTOS){
		printf("%s\n<a11> <a12>... <a%u%u> <b11> <b12> ... <b%u%u>\n", argv[0], LINHAS_MATRIZ_A, COLUNAS_MATRIZ_A, LINHAS_MATRIZ_B, COLUNAS_MATRIZ_B);
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}	

	for(linha=0; linha<LINHAS_MATRIZ_A; linha++){
		printf("\n");
		for(coluna=0; coluna<COLUNAS_MATRIZ_A; coluna++){
			matrizA[linha][coluna] = strtof(argv[coluna + (linha*COLUNAS_MATRIZ_A) + 1], &validacao);	
			printf("%f\t", matrizA[linha][coluna]);
			if(*validacao!=EOS){
				printf("\n\nERRO VALIDACAO ARGUMENTO: %c\n\n", *validacao);
				exit(ERRO_VALIDACAO_A);
			}
		}
	}

	printf("\n");
	for(linha=0; linha<LINHAS_MATRIZ_B; linha++){
		printf("\n");
		for(coluna=0; coluna<COLUNAS_MATRIZ_B; coluna++){
			matrizB[linha][coluna]= strtof(argv[coluna + (linha*COLUNAS_MATRIZ_B)+(LINHAS_MATRIZ_A*COLUNAS_MATRIZ_A) + 1], &validacao);
			printf("%f\t", matrizB[linha][coluna]);
		
			if(*validacao!=EOS){
				printf("\n\nERRO VALIDACAO ARGUMENTO: %c\n\n", *validacao);
				exit(ERRO_VALIDACAO_B);
			}
		}

	}

	printf("\n\n");
	MultiplicarMatrizes(matrizA, matrizB, matrizC);
	
	for(linha=0; linha<LINHAS_MATRIZ_C; linha++){
		printf("\n");
		for(coluna=0; coluna<COLUNAS_MATRIZ_C; coluna++)
			printf("%f\t", matrizC[linha][coluna]);
	}
	printf("\n\n");
	return OK;
	
}
/*$RCSfile: aula0702.c,v $*/
