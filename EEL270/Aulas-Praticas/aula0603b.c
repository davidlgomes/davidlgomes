/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:15:31 $
 * $Log: aula0603b.c,v $
 * Revision 1.1  2020/10/02 21:15:31  david.lopes
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

	if(argc!=QUANTIDADE_ARGUMENTOS_B){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}
	if(strlen(argv[1])!=COMPRIMENTO_PIS_PASEP+1){
		printf("\nPasse Apenas 11 numeros\nFormato ideal: a1aa2a3a4a5a6a7a8a9a10-a11\n");
		exit(COMPRIMENTO_PIS_PASEP_INVALIDO);
	}
	if(argv[1][10]!='-'){
		printf("\nFORMATO INVALIDO\nFormato ideal: a1a2a3a4a5a6a7a8a9a10-a11\n");
		exit(FORMATO_INVALIDO);
	}

	for(indice=0; indice<COMPRIMENTO_PIS_PASEP+1; indice++){
		if(indice!=10){	
			if((argv[1][indice]<'0')||(argv[1][indice]>'9')){
				printf("\nCaractere invalido: %c\n", argv[1][indice]);
				exit(CARACTERE_INVALIDO);
			}
		}
	}

	for(indice=0; indice<COMPRIMENTO_PIS_PASEP+1; indice++){
		if(indice<10)
			pisPasep[indice]= (byte)argv[1][indice]-'0';
		if(indice==11)
			pisPasep[indice-1]= (byte)argv[1][indice]-'0';

	}
	printf("\n%d\n",ValidarPisPasep(pisPasep));
	
	return OK;
}
/*$RCSfile: aula0603b.c,v $*/
