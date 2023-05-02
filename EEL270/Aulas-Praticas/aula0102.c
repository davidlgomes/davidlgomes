/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Exibindo tipos basicos nome com uma formatacao especifica
 *
 * $Author: david.lopes $
 * $Date: 2020/09/01 18:17:54 $
 * $Log: aula0102.c,v $
 * Revision 1.2  2020/09/01 18:17:54  david.lopes
 * aul√a0102.c
 *
 *
 * */
#include<stdio.h>
#define OK 0
int main(int argc, char **argv){
	printf("\'Tipos Basicos\':\n\n");
	printf("int\n\t\t\t%lu byte%c\n", sizeof(int), sizeof(int)>1? 's': ' ');
	printf("float\n\t\t\t%lu byte%c\n", sizeof(float), sizeof(float)>1? 's': ' ');
	printf("double\n\t\t\t%lu byte%c\n", sizeof(double), sizeof(double)>1? 's': ' ');
	printf("char\n\t\t\t%lu byte%c\n", sizeof(char), sizeof(char)>1? 's': ' ');
	printf("void\n\t\t\t%lu byte%c\n", sizeof(void), sizeof(void)>1? 's':' ');

	return OK;
}
/*$RCSfile: aula0102.c,v $*/
