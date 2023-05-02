/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <nome completo>
 * Descricao: <descrição sucinta dos objetivos do programa>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/09 02:59:52 $
 * $Log: aula0201c.c,v $
 * Revision 1.2  2020/09/09 02:59:52  david.lopes
 * au�la0201c.c
 *
*/
#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull primeiroTermo, ull segundoTermo){
	unsigned indice, resultado;
	indice=0;
	resultado=0;
	if((primeiroTermo==0)&&(segundoTermo==0))
		resultado=0;
		
	if((primeiroTermo==0)&&(segundoTermo!=0))
		resultado=segundoTermo;
			
	if((segundoTermo==0)&&(primeiroTermo!=0))
		resultado=primeiroTermo;
	
	for(indice=1; indice<=primeiroTermo||indice<=segundoTermo; indice++) {
		if(indice!=0)
			if(((primeiroTermo%indice)==0)&&((segundoTermo%indice)==0))
				resultado = indice;	
	}
	
	return resultado;

}

/*$RCSfile: aula0201c.c,v $*/
