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
 * $Date: 2020/10/09 04:24:46 $
 * $Log: aula0703.h,v $
 * Revision 1.1  2020/10/09 04:24:46  david.lopes
 * Initial revision
 *
 
 *
 */
#ifndef AULA0701

#ifdef __linux__
	#define _XOPEN_SOURCE	600
	#define _POSIX_X_SOURCE	10000
	
#endif
#include<unistd.h>

#define OK					      0
#define EOS  					    '\0'
#define APAGADO					     '0'
#define NUMERO_MAXIMO_LINHAS			      250
#define NUMERO_MAXIMO_COLUNAS                         800
#define ACESO					      '1'
#define QUANTIDADE_ARGUMENTOS_INVALIDO                2	
#define CARACTERE_INVALIDO			      1
#define ARGUMENTO_1_INVALIDO			      1
#define ARGUMENTO_2_INVALIDO			      2
#define ARGUMENTO_3_INVALIDO			      3
#define ARGUMENTO_4_INVALIDO			      4
#define ARGUMENTO_5_INVALIDO			      5
#define ARGUMENTO_6_INVALIDO			      6
#define ARGUMENTO_7_INVALIDO			      7
#define ARGUMENTO_8_INVALIDO			      8
#define ARGUMENTO_9_INVALIDO			      9
#define QUANTIDADE_ARGUMENTOS                         10
#define AULA0701	"@(#)aula0703.h $Revision: 1.1 $"

typedef enum{
	ok,
	linhaInvalida,
	tamanhoLinhaInvalida,
	tamanhoColunaInvalida,
	argumentoMonitorInvalido,
	monitorNULL,
	medidasLinhaCantoInferiorInvalida,
	medidasLinhaCantoSuperiorInvalida,
	medidasColunaCantoInferiorInvalida,
	medidasColunaCantoSuperiorInvalida,
	ordemColunaAlternada,
	ordemLinhaAlternada,
	comprimentoColunaCantoInferiorInvalida,
	comprimentoColunaCantoSuperiorInvalida,
	comprimentoLinhaCantoInferiorInvalida,
	comprimentoLinhaCantoSuperiorInvalida


}tipoErros;

typedef enum{
	apagado,
	aceso
}tipoPixel;

/*typedef unsigned char byte;*/


tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera);

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera);

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linhaCantoSuperior, unsigned colunaCantoSuperior, unsigned linhaCantoInferior, unsigned colunaCantoInferior, useconds_t tempoEspera);

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linha, unsigned coluna, useconds_t tempoEspera);

#endif
/*$RCSfile: aula0703.h,v $*/
