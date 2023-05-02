
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
 * $Date: 2020/09/22 21:56:52 $
 * $Log: aula0501d.c,v $
 * Revision 1.1  2020/09/22 21:56:52  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/15 19:33:07  david.lopes
 * Initial revision
 *
 * */



#include "aula0401.h"
#include "aula0501.h"
float
CalcularSerieHarmonicaAlternada (unsigned long int numero){
        float resultado;
	resultado=1;
	if(numero==0)	
		resultado=0;
	
	else{	
		while(numero>0){
			if(numero>1){	
				if((numero%2)==0)
					resultado = resultado - (1/CalcularExponencial(numero, numero));
								
				if((numero%2)!=0)
					resultado = resultado + (1/CalcularExponencial(numero, numero));
			}					
			
	
				
				
			numero--;
			
		}

	}
	return resultado;
}
/*$RCSfile: aula0501d.c,v $*/
