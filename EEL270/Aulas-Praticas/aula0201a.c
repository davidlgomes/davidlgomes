/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <nome completo>
 * Descricao: <descrição sucinta dos objetivos do programa>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/09 02:56:39 $
 * $Log: aula0201a.c,v $
 * Revision 1.2  2020/09/09 02:56:39  david.lopes
 * aula0201a.c
 *
*/
#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull primeiroTermo, ull segundoTermo){
	ull resultante;
	
	if((primeiroTermo==0)&&(segundoTermo==0))
		return 0;
	
	if((primeiroTermo==0)&&(segundoTermo!=0))
		return segundoTermo;
	
	if((segundoTermo==0)&&(primeiroTermo!=0))
		return primeiroTermo;
	
	resultante = (primeiroTermo%segundoTermo);
	
	if(resultante!=0)
		return CalcularMaximoDivisorComum(segundoTermo, resultante);

	return segundoTermo;



}
/*$RCSfile: aula0201a.c,v $*/
