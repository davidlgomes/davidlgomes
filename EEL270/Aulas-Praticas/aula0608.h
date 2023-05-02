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
 * $Date: 2020/10/02 21:08:44 $
 * $Log: aula0608.h,v $
 * Revision 1.1  2020/10/02 21:08:44  david.lopes
 * Initial revision
 *
 *
 */
#ifndef AULA0601
#define OK					      0
#define EOS  					    '\0'
#define QUANTIDADE_ARGUMENTOS_A                      11
#define QUANTIDADE_ARGUMENTOS_B                       2
#define QUANTIDADE_ARGUMENTOS_AULA0610                1
#define QUANTIDADE_ARGUMENTOS_C                      12
#define COMPRIMENTO_PIS_PASEP                        11
#define COMPRIMENTO_PIS_PASEP_INVALIDO                4
#define QUANTIDADE_ARGUMENTOS_INVALIDA                2	
#define CARACTERE_INVALIDO			      1
#define NUMERO_NEGATIVO			              3
#define PIS_PASEP_INVALIDO			      5
#define FORMATO_INVALIDO			      6

#define AULA0601	"@(#)aula0601.h $Revision: 1.1 $"

typedef enum{
	ok,
	erroDePassagem,
	erroDePassagemEntrada,
	erroDePassagemSaida,
	pisPasepInvalido,
	digitoVerificadorInvalido
}tipoErros;

typedef unsigned char byte;

tipoErros
GerarDigitoVerificadorPisPasep (char []);

tipoErros
GerarPisPasep (char []);

#endif

/*$RCSfile: aula0608.h,v $*/
