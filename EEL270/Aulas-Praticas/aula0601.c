
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
 * $Date: 2020/10/02 20:59:06 $
 * $Log: aula0601.c,v $
 * Revision 1.1  2020/10/02 20:59:06  david.lopes
 * Initial revision
 *
 *
 * */

#include<stdlib.h>
#include <time.h>
#include "aula0601.h"
tipoErros
GerarDigitoVerificadorPisPasep (byte pisPasep[]){
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
		resultado+=pisPasep[indice]*pesos[indice];
	
	if(((resultado%11)==0)||((resultado%11)==1))
		pisPasep[10]=0;
	else
		pisPasep[10]=COMPRIMENTO_PIS_PASEP-(resultado%11);
		
	return ok;
	


}

tipoErros
ValidarPisPasep (byte pisPasep[]){
	byte auxiliar[11];
	unsigned indice;
	if(!pisPasep)
		return erroDePassagem;
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		auxiliar[indice]=pisPasep[indice];
	GerarDigitoVerificadorPisPasep(auxiliar);
	if(auxiliar[10]!=pisPasep[10])
		return digitoVerificadorInvalido;
	return ok;
}

tipoErros
GerarPisPasep (byte pisPasep[]){
	unsigned indice;
	srand((unsigned)time(NULL));
	if(!pisPasep)
		return erroDePassagem;
	for(indice=0; indice<COMPRIMENTO_PIS_PASEP-1; indice++)
		pisPasep[indice] = rand()%10;
	GerarDigitoVerificadorPisPasep (pisPasep);
	return ok;

}
/*$RCSfile: aula0601.c,v $*/
