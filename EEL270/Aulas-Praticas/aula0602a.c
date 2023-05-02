/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:10:56 $
 * $Log: aula0602a.c,v $
 * Revision 1.1  2020/10/02 21:10:56  david.lopes
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
	char *validacao;

	if(argc!=QUANTIDADE_ARGUMENTOS_A){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1> <a2> <a3> <a4> <a5> <a6> <a7> <a8> <a9> <a10> <a11>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}

	
	for(indice=1; indice<argc; indice++){
		if(argv[indice][0]=='-'){
			printf("\nApenas numeros Positivos\n");
			exit(NUMERO_NEGATIVO);
		}
	}
	for(indice=1; indice<argc; indice++)
		pisPasep[indice-1]= (byte)strtoul(argv[indice], &validacao, 10);
	if(*validacao!=EOS){
		printf("\nCaractere Invalido %c: \n", *validacao);
		exit(CARACTERE_INVALIDO);
	}		 
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		if((pisPasep[indice]<0)||(pisPasep[indice]>9)){
			printf("\nApenas numeros entre 0 e 9\nCaractere Invalido: %d\n", pisPasep[indice]);
			exit(PIS_PASEP_INVALIDO);
		}
	if(GerarDigitoVerificadorPisPasep(pisPasep)==ok)
		printf("\n%d\n", pisPasep[COMPRIMENTO_PIS_PASEP-1]);
	
	return OK;
}
/*$RCSfile: aula0602a.c,v $*/
