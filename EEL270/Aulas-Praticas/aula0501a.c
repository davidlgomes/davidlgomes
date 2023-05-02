
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
 * $Date: 2020/09/22 21:56:17 $
 * $Log: aula0501a.c,v $
 * Revision 1.1  2020/09/22 21:56:17  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/09/15 19:32:54  david.lopes
 * Initial revision
 *
 * */



#include "aula0501.h"
#include "aula0401.h"
float
CalcularSerieHarmonicaAlternada (unsigned long int numero){
	
	if(numero==0)
		return 0;
	if((numero%2)==0)
		return (-1/CalcularExponencial(numero, numero)) + CalcularSerieHarmonicaAlternada (numero-1);
		
	return (1/CalcularExponencial(numero, numero)) + CalcularSerieHarmonicaAlternada (numero-1);
	


}
/*$RCSfile: aula0501a.c,v $*/
