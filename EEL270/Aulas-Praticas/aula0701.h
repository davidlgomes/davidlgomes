/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo .h do programa de calculo de serie alternada
 *
 * $Author: david.lopes $
 * $Date: 2020/10/08 20:28:19 $
 * $Log: aula0701.h,v $
 * Revision 1.1  2020/10/08 20:28:19  david.lopes
 * Initial revision
 *
 
 *
 */
#ifndef AULA0701
#define OK					      0
#define EOS  					    '\0'
#define QUANTIDADE_ARGUMENTOS_INVALIDA                2	
#define CARACTERE_INVALIDO			      1
#define LINHAS_MATRIZ_A				      5
#define COLUNAS_MATRIZ_A			      3
#define LINHAS_MATRIZ_B				      3
#define COLUNAS_MATRIZ_B  			      4
#define LINHAS_MATRIZ_C				      5
#define COLUNAS_MATRIZ_C			      4
#define QUANTIDADE_ARGUMENTOS                         (LINHAS_MATRIZ_A*COLUNAS_MATRIZ_A) + (LINHAS_MATRIZ_B*COLUNAS_MATRIZ_B) + 1
#define ERRO_VALIDACAO_A			      7
#define ERRO_VALIDACAO_B			      8
#define AULA0701	"@(#)aula0701.h $Revision: 1.1 $"

typedef enum{
	ok,
	erroDePassagemMatrizA,
	erroDePassagemMatrizB,
	erroDePassagemMatrizC,
	erroDeMultiplicacao,
	quantidadeLinhasInvalidaMatrizC,
	quantidadeColunasInvalidaMatrizC
}tipoErros;

/*typedef unsigned char byte;*/


tipoErros
MultiplicarMatrizes (float [LINHAS_MATRIZ_A][COLUNAS_MATRIZ_A], float [LINHAS_MATRIZ_B][COLUNAS_MATRIZ_B], float [LINHAS_MATRIZ_C][COLUNAS_MATRIZ_C]);



#endif
/*$RCSfile: aula0701.h,v $*/
