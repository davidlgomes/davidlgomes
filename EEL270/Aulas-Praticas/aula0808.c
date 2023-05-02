/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 06:25:34 $
 * $Log: aula0808.c,v $
 * Revision 1.2  2020/10/22 06:25:34  david.lopes
 * aula0808.c
 *
 * Revision 1.1  2020/10/22 05:39:13  david.lopes
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
#define NUMERO_ARGUMENTOS_B	2	
#define	OK				0	
#define	ARGUMENTO_INVALIDO		4	
#define	ERRO_VALIDACAO			2
#define	NUMERO_ARGUMENTO_INVALIDO	3

int main(int argc, char **argv){
	if(argc!=NUMERO_ARGUMENTOS_B){
		printf("\n%s: <a1><a2>", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}

	ExibirConteudoArquivo(argv[1]);

			
		
	return OK;
}
/*$RCSfile: aula0808.c,v $*/
