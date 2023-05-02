/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Exibindo tipos basicos, modificadores de largura e modificadores de sinal com uma formatacao especifica
 *
 * $Author: david.lopes $
 * $Date: 2020/09/01 18:18:14 $
 * $Log: aula0103.c,v $
 * Revision 1.2  2020/09/01 18:18:14  david.lopes
 * aula0103.c
 *
 * */
#include<stdio.h>
#define OK 0
int main(int argc, char **argv){
	int indice;
	printf("\'Tipos Basicos\':\n\n");
	printf("int\n\t\t\t%lu byte%c\n", sizeof(int), sizeof(int)>1? 's': ' ');
	printf("float\n\t\t\t%lu byte%c\n", sizeof(float), sizeof(float)>1? 's': ' ');
	printf("double\n\t\t\t%lu byte%c\n", sizeof(double), sizeof(double)>1? 's': ' ');
	printf("char\n\t\t\t%lu byte%c\n", sizeof(char), sizeof(char)>1? 's': ' ');
	printf("void\n\t\t\t%lu byte%c\n", sizeof(void), sizeof(void)>1? 's':' ');
	
	for(indice=0; indice<80; indice++)
		printf("-");
	printf("\n");

	printf("\'Modificadores de Sinal\':\n\n");
	printf("signed\n\t\t\t%lu byte%c\n", sizeof(signed), sizeof(signed)>1? 's': ' ');
	printf("unsigned\n\t\t\t%lu byte%c\n", sizeof(unsigned), sizeof(unsigned)>1? 's': ' ');
	
	for(indice=0; indice<80; indice++)
		printf("-");
	
	printf("\n");
	printf("\'Modificadores de Largura\':\n\n");
	
	printf("short\n\t\t\t%lu byte%c\n", sizeof(short), sizeof(short)>1? 's': ' ');
	printf("long\n\t\t\t%lu byte%c\n", sizeof(long), sizeof(long)>1? 's': ' ');
	printf("long long\n\t\t\t%lu byte%c\n", sizeof(long long), sizeof(long long)>1? 's': ' ');


	return OK;
}
/*$RCSfile: aula0103.c,v $*/
