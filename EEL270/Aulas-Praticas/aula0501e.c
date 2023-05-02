
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
 * $Date: 2020/09/22 21:57:05 $
 * $Log: aula0501e.c,v $
 * Revision 1.1  2020/09/22 21:57:05  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/15 19:32:54  david.lopes
 * Initial revision
 *
 * */



#include<math.h>
#include "aula0501.h"

float
CalcularSerieHarmonicaAlternada(unsigned long int numero){
	
	if(numero==0)
		return 0;
	if((numero%2)==0)
		return (-1/pow(numero, numero)) + CalcularSerieHarmonicaAlternada (numero-1);
		
	return (1/pow(numero, numero)) + CalcularSerieHarmonicaAlternada (numero-1);
	


}
/*$RCSfile: aula0501e.c,v $*/
