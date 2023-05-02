/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:23:05 $
 * $Log: aula0607.c,v $
 * Revision 1.1  2020/10/02 21:23:05  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/22 21:57:17  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/15 19:33:45  david.lopes
 * Initial revision
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aula0601.h"
int main(int argc, char** argv){
	unsigned indice;
	byte pisPasep[COMPRIMENTO_PIS_PASEP];

	if(argc!=QUANTIDADE_ARGUMENTOS_AULA0607){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}

	GerarPisPasep(pisPasep);
	printf("\n");
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP; indice++)
		printf("%d ", pisPasep[indice]);
	printf("\n");
	return OK;
}
/*$RCSfile: aula0607.c,v $*/
