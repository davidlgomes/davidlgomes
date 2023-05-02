
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de calculo de exponencial utilizando recursividade
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:33:30 $
 * $Log: aula0401d.c,v $
 * Revision 1.1  2020/09/15 19:33:30  david.lopes
 * Initial revision
 *
 * */



#include<math.h>
#include "aula0401.h"
long double
CalcularExponencial (double base, int expoente){
	unsigned indice;
        long double resultado;
	indice=0;
	resultado=1;
	if(expoente==0)	
		return 1;
	
	if((base==0)&&(expoente>0))
		return 0;

	if((base==0)&&(expoente<0))
		return INFINITY;
	else{	
		while(indice!=expoente){	
		
			if((base!=0)&&(expoente<1)){
				resultado *= (1/base);
				indice--;
			}
	
			if((base!=0)&&(expoente>1)){
				resultado *= base;
				indice++;
			}
		}

	}
	return resultado;
}
/*$RCSfile: aula0401d.c,v $*/
