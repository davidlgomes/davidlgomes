/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo .h do programa de calculo de Fibonacci
 *
 * $Author: david.lopes $
 * $Date: 2020/09/15 19:29:59 $
 * $Log: aula0301.h,v $
 * Revision 1.2  2020/09/15 19:29:59  david.lopes
 * aula0301.h
 *
 * Revision 1.1  2020/09/09 03:09:46  david.lopes
 * Initial revision
 * */
#ifndef AULA0301
#define OK 0
#define EOS  '\0'
#define QUANTIDADE_ARGUMENTOS                         2
#define QUANTIDADE_ARGUMENTOS_INVALIDA                3
#define PRIMEIRO_TERMO_INVALIDO	                      4
#define PRIMEIRO_CARACTERE_PRIMEIRO_TERMO_INVALIDO    1
#define PRIMEIRO_CARACTERE_SEGUNDO_TERMO_INVALIDO     2
#define SEGUNDO_TERMO_INVALIDO	                      5
#define AULA0301	"@(#)aula0301.h $Revision: 1.2 $"


unsigned long long
CalcularTermoSerieFibonacci (unsigned short);

#endif
/*$RCSfile: aula0301.h,v $*/
