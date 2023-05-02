/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/09 04:28:08 $
 * $Log: aula0704.c,v $
 * Revision 1.1  2020/10/09 04:28:08  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 *

 */


#ifdef __linux__
	#define _XOPEN_SOURCE	600
	#define _POSIX_X_SOURCE	10000
#endif
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "aula0703.h"

int main(int argc, char** argv){

	useconds_t tempoEspera;
	tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];
	unsigned numeroMaximoLinhas;
	unsigned numeroMaximoColunas;
	unsigned linhaCantoSuperior;
	unsigned colunaCantoSuperior;
	unsigned linhaCantoInferior;
	unsigned colunaCantoInferior;
	unsigned linha;
	unsigned coluna;
	char *validacao;
	
	if(argc!=QUANTIDADE_ARGUMENTOS){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDO: <a1><a2><a3><a4><a5><a6><a7><a8><a9>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDO);
	}

	numeroMaximoLinhas = (unsigned)strtoul(argv[1], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_1_INVALIDO);
	}	
	
	numeroMaximoColunas = (unsigned)strtoul(argv[2], &validacao, 10);

	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_2_INVALIDO);
	}
	
	tempoEspera = (useconds_t)strtoul(argv[3], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_3_INVALIDO);
	}

	linhaCantoSuperior = (unsigned)strtoul(argv[4], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_4_INVALIDO);
	}

	colunaCantoSuperior = (unsigned)strtoul(argv[5], &validacao, 10); 
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_5_INVALIDO);
	}

	linhaCantoInferior = (unsigned) strtoul(argv[6], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_6_INVALIDO);
	}

	colunaCantoInferior = (unsigned) strtoul(argv[7], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_7_INVALIDO);
	}

	linha = (unsigned) strtoul(argv[8], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_8_INVALIDO);
	}
	
	coluna = (unsigned) strtoul(argv[9], &validacao, 10);
	
	if(*validacao!=EOS){
		printf("\nArgumento Invalido : %c\n", *validacao);
		exit(ARGUMENTO_9_INVALIDO);
	}

	LimparMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);
	DesenharRetangulo (monitor, numeroMaximoLinhas, numeroMaximoColunas, linhaCantoSuperior, colunaCantoSuperior, linhaCantoInferior, colunaCantoInferior, tempoEspera);
	PreencherPoligono (monitor, numeroMaximoLinhas, numeroMaximoColunas, linha, coluna, tempoEspera);
	return ok;

}

/*$RCSfile: aula0704.c,v $*/
