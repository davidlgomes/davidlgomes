
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de calculo de Fibonacci utilizando recursividade
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:30:27 $
 * $Log: aula0301a.c,v $
 * Revision 1.2  2020/09/15 19:30:27  david.lopes
 * aula0301a.c
 *
 * Revision 1.1  2020/09/09 03:10:07  david.lopes
 * Initial revision
 * */




#include "aula0301.h"
unsigned long long
CalcularTermoSerieFibonacci (unsigned short numeroTermo){
	
	if(numeroTermo<=1)
		return numeroTermo;
	
	return CalcularTermoSerieFibonacci (numeroTermo-1) + CalcularTermoSerieFibonacci (numeroTermo-2);



}
/*$RCSfile: aula0301a.c,v $*/
