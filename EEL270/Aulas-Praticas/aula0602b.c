/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:12:08 $
 * $Log: aula0602b.c,v $
 * Revision 1.1  2020/10/02 21:12:08  david.lopes
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
#include<string.h>
#include "aula0601.h"
int main(int argc, char** argv){
	unsigned indice;
	byte pisPasep[COMPRIMENTO_PIS_PASEP];

	if(argc!=QUANTIDADE_ARGUMENTOS_B){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}
	if(strlen(argv[1])!=COMPRIMENTO_PIS_PASEP-1){
		printf("\nPasse apenas 10 numeros\n");
		exit(COMPRIMENTO_PIS_PASEP_INVALIDO);
	}
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++){
		if((argv[1][indice]<'0')||(argv[1][indice]>'9')){
			printf("\nCaractere invalido: %c\n", argv[1][indice]);
			exit(CARACTERE_INVALIDO);
		}
	}
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		pisPasep[indice]= (byte)argv[1][indice]-'0';
	

	if(GerarDigitoVerificadorPisPasep(pisPasep)==ok)
		printf("\n%d\n", pisPasep[COMPRIMENTO_PIS_PASEP-1]);
	
	return OK;
}
/*$RCSfile: aula0602b.c,v $*/
