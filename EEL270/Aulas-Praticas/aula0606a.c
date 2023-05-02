/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:18:20 $
 * $Log: aula0606a.c,v $
 * Revision 1.1  2020/10/02 21:18:20  david.lopes
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
#include "aula0604.h"
int main(int argc, char** argv){
	unsigned indice;
	char pisPasep[COMPRIMENTO_PIS_PASEP];
	
	pisPasep[0]='0';
	if(argc!=QUANTIDADE_ARGUMENTOS_C){
		printf("\nQUANTIDADE ARGUMENTOS INVALIDA: <a1> <a2> <a3> <a4> <a5> <a6> <a7> <a8> <a9> <a10> <a11>\n");
		exit(QUANTIDADE_ARGUMENTOS_INVALIDA);
	}
	
	for(indice=1; indice<COMPRIMENTO_PIS_PASEP+1; indice++){
		if(argv[indice][0]=='-'){
			printf("\nApenas numeros Positivos\n");
			exit(NUMERO_NEGATIVO);
		}
		if(strlen(argv[indice])>1){
			printf("\nCARACTERE INVALIDO\n");
			exit(CARACTERE_INVALIDO);
		}
	}
	
	for(indice=1; indice<COMPRIMENTO_PIS_PASEP+1; indice++){
		if((argv[indice][0]<'0')||(argv[indice][0]>'9')){
			printf("\nApenas numeros entre 0 e 9\nCaractere Invalido: %c\n", argv[indice][0]);
			exit(PIS_PASEP_INVALIDO);
		}
	}
	for(indice=1; indice<COMPRIMENTO_PIS_PASEP+1; indice++)
		pisPasep[indice-1]= argv[indice][0];
	
	printf("\n%d\n", ValidarPisPasep(pisPasep));

		
	
	return OK;
}
/*$RCSfile: aula0606a.c,v $*/
