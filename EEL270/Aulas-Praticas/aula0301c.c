/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <David Lopes Gomes>
 * Descricao: <Codigo de implementacao de calculo do numero de serie Fibonacci usando laco de repeticao do while>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:31:10 $
 * $Log: aula0301c.c,v $
 * Revision 1.2  2020/09/15 19:31:10  david.lopes
 * aula0301c.c
 *
 * Revision 1.1  2020/09/09 03:10:35  david.lopes
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
		for(indice=0; indice<numeroTermo; indice++){	
			if(indice==1){
				numeroAnterior1=0;
				numeroAnterior2=1;
			}
			resultado=numeroAnterior1+numeroAnterior2;
			numeroAnterior1=numeroAnterior2;
			numeroAnterior2=resultado;
			
		}
	}
	return resultado;

}
/*$RCSfile: aula0301c.c,v $*/
