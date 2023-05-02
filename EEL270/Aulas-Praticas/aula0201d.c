/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: <nome completo>
 * Descricao: <descrição sucinta dos objetivos do programa>
 *
 * $Author: david.lopes $
 * $Date: 2020/09/09 03:07:36 $
 * $Log: aula0201d.c,v $
 * Revision 1.3  2020/09/09 03:07:36  david.lopes
 * aula0201d.c
 *
 * Revision 1.2  2020/09/09 03:00:10  david.lopes
 * aula0201d.c
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
	
	while((primeiroTermo>=indice)||(segundoTermo>=indice)){
		if(indice!=0)
			if(((primeiroTermo%indice)==0)&&((segundoTermo%indice)==0))
				resultado = indice;
		indice++;	
	}
	
	return resultado;

}
/*$RCSfile: aula0201d.c,v $*/
