
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de validacao PIS/PASEP
 *
 * $Author: david.lopes $
 * $Date: 2020/10/08 20:28:08 $
 * $Log: aula0701.c,v $
 * Revision 1.1  2020/10/08 20:28:08  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/02 20:59:06  david.lopes
 * Initial revision
 *
 *
 * */

#include "aula0701.h"

tipoErros
MultiplicarMatrizes(float matrizA[LINHAS_MATRIZ_A][COLUNAS_MATRIZ_A], float matrizB[LINHAS_MATRIZ_B][COLUNAS_MATRIZ_B], float matrizC[LINHAS_MATRIZ_C][COLUNAS_MATRIZ_C]){
	unsigned indiceLinha, indiceColuna, indice;

	if(COLUNAS_MATRIZ_A!=LINHAS_MATRIZ_B)
		return erroDeMultiplicacao;
	if(LINHAS_MATRIZ_A!=LINHAS_MATRIZ_C)
		return quantidadeLinhasInvalidaMatrizC;
	if(COLUNAS_MATRIZ_B!=COLUNAS_MATRIZ_C)
		return quantidadeColunasInvalidaMatrizC;
	
	if(!matrizA)
		return erroDePassagemMatrizA;
	
	if(!matrizB)
		return erroDePassagemMatrizB;

	if(!matrizC)
		return erroDePassagemMatrizC;
	matrizC[0][0]=0;
	for(indiceLinha=0; indiceLinha<LINHAS_MATRIZ_C; indiceLinha++){
		for(indiceColuna=0; indiceColuna<COLUNAS_MATRIZ_C; indiceColuna++){
			matrizC[indiceLinha][indiceColuna]=0;
			for(indice=0; indice<COLUNAS_MATRIZ_A; indice++)
				matrizC[indiceLinha][indiceColuna] += matrizA[indiceLinha][indice]*matrizB[indice][indiceColuna];
		}
	}
	return ok;
}

/*$RCSfile: aula0701.c,v $*/
