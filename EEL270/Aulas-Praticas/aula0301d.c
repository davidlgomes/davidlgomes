/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <David Lopes Gomes>
 * Descricao: <Codigo de implementacao de calculo do numero de serie Fibonacci usando laco de repeticao do while>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:31:26 $
 * $Log: aula0301d.c,v $
 * Revision 1.2  2020/09/15 19:31:26  david.lopes
 * aula0301d.c
 *
 * Revision 1.1  2020/09/09 03:11:17  david.lopes
 * Initial revision
 **/


#include "aula0301.h"
unsigned long long
CalcularTermoSerieFibonacci (unsigned short numeroTermo){
	unsigned indice, resultado, numeroAnterior1, numeroAnterior2;
	indice=0;
	resultado=0;
	numeroAnterior1=0;
	numeroAnterior2=1;
	if(numeroTermo==0)
		resultado=0;
	else{
			
		while(indice<numeroTermo){
			if(indice==1){
				numeroAnterior1=0;
				numeroAnterior2=1;
			}
			resultado=numeroAnterior1+numeroAnterior2;
			numeroAnterior1=numeroAnterior2;
			numeroAnterior2=resultado;
		
			indice++;	
		}
	}
	return resultado;

}
/*$RCSfile: aula0301d.c,v $*/
