/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Exibindo tipos basicos, modificadores de sinal, modificadores de largura, modificadores de sinal combinados com modificadores de largura com uma formatacao especifica
 *
 * $Author: david.lopes $
 * $Date: 2020/09/01 18:18:25 $
 * $Log: aula0104.c,v $
 * Revision 1.2  2020/09/01 18:18:25  david.lopes
 * aula0104.c
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


	for(indice=0; indice<80; indice++)
		printf("-");

	printf("\n");

	printf("\'Modificadores de Sinal combinados com os Modificadores de Largura:\' \n\n");
	
	printf("signed short\n\t\t\t%lu byte%c\n", sizeof(signed short), sizeof(signed short)>1? 's': ' ');
	printf("unsigned short\n\t\t\t%lu byte%c\n", sizeof(unsigned short), sizeof(unsigned short)>1? 's': ' ');
	printf("signed long\n\t\t\t%lu byte%c\n", sizeof(signed long), sizeof(signed long)>1? 's': ' ');
	printf("unsigned long\n\t\t\t%lu byte%c\n", sizeof(unsigned long), sizeof(unsigned long)>1? 's': ' ');
	printf("signed long long\n\t\t\t%lu byte%c\n", sizeof(signed long long), sizeof(signed long long)>1? 's':' ');
	printf("unsigned long long\n\t\t\t%lu byte%c\n", sizeof(unsigned long long), sizeof(unsigned long long)>1? 's':' ');
	return OK;
}
/*$RCSfile: aula0104.c,v $*/
