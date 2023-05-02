
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de validacao PIS/PASEP
 *
 * $Author: david.lopes $
 * $Date: 2020/10/02 21:05:46 $
 * $Log: aula0608.c,v $
 * Revision 1.1  2020/10/02 21:05:46  david.lopes
 * Initial revision
 *
 *
 * */


#include<stdlib.h>
#include <time.h>
#include "aula0608.h"

tipoErros
GerarDigitoVerificadorPisPasep (char pisPasep[]){
	unsigned pesos[10], indice, resultado;
	pesos[0]=3;
	pesos[1]=2;
	pesos[2]=9;
	pesos[3]=8;
	pesos[4]=7;
	pesos[5]=6;
	pesos[6]=5;
	pesos[7]=4;
	pesos[8]=3;
	pesos[9]=2;
	resultado=0;
	if(!pisPasep)
		return erroDePassagem;

	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		resultado+=(pisPasep[indice]-'0')*pesos[indice];

	if(((resultado%11)==0)||((resultado%11)==1))
		pisPasep[COMPRIMENTO_PIS_PASEP-1]='0';
	else
		pisPasep[COMPRIMENTO_PIS_PASEP-1]=(COMPRIMENTO_PIS_PASEP-(resultado%11)) +'0';
		
	return ok;
	


}


tipoErros
GerarPisPasep (char pisPasep[]){
	unsigned indice;
	srand((unsigned)time(NULL));
	if(!pisPasep)
		return erroDePassagem;
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		pisPasep[indice] = rand()%10 + '0';
	
	GerarDigitoVerificadorPisPasep(pisPasep);
	return ok;

}
/*$RCSfile: aula0608.c,v $*/
