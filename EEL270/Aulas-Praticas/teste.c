#define _XOPEN_SOURCE 500
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h> 

#define OK                                      0
#define COMPRIMENTO_MAXIMO_EMAIL_EXCEDIDO       1
#define COMPRIMENTO_MAXIMO_IDIOMA_EXCEDIDO      2
#define COMPRIMENTO_MAXIMO_APELIDO_EXCEDIDO     3
#define COMPRIMENTO_MAXIMO_NOME_EXCEDIDO        4
#define VALOR_ARGUMENTO_INEXISTENTE             5

#define EOS '\0'

#define COMPRIMENTO_MAXIMO_EMAIL                1024
#define COMPRIMENTO_MAXIMO_IDIOMA               32
#define COMPRIMENTO_MAXIMO_APELIDO              65
#define COMPRIMENTO_MAXIMO_NOME                 256

typedef enum
{
	argumentoEmail,
	argumentoIdioma,
	argumentoApelido,
	argumentoNomeUsuario
} indicesArgumentos;


int
main (int argc, char **argv)
{
	const char *opcoesCurtas = "ChN";
 	struct option opcoesLongas [4] =
 	{
		 {"Configure", 0, NULL, 'C'},
		 {"help", 0, NULL, 'h'},
		 {"Ncurses", 0, NULL, 'N'},
		 {NULL, 0, NULL, 0}
 	};
 
	char *nomesArgumentos [ ] =
	{
		"email",
		"language",
		"nickname",
		"username",
		NULL
	};

	int opcaoCurta;
	int opcaoLonga;
	int indiceArgumento;
	char *argumentos, *valorArgumento;
	char email [COMPRIMENTO_MAXIMO_EMAIL + 1];
	char idioma [COMPRIMENTO_MAXIMO_IDIOMA + 1];
	char apelido [COMPRIMENTO_MAXIMO_APELIDO + 1]; 
	char nome [COMPRIMENTO_MAXIMO_NOME + 1];
	
	opterr = 0; /* desabilita exibicao de erro */

	memset (email, 0x00, COMPRIMENTO_MAXIMO_EMAIL + 1);
	memset (idioma, 0x00, COMPRIMENTO_MAXIMO_IDIOMA + 1);
	memset (apelido, 0x00, COMPRIMENTO_MAXIMO_APELIDO + 1);
	memset (nome, 0x00, COMPRIMENTO_MAXIMO_NOME + 1); 
	
	while ((opcaoCurta = getopt_long (argc, argv, opcoesCurtas, opcoesLongas, &opcaoLonga)) != -1){
		switch (opcaoCurta) 
		{	
		case 'C':
			printf ("Configure\n");
			while (optind < argc)
			{
				argumentos = argv [optind];
				printf ("Antes --- argumentos: \"%s\"\n", argumentos);
				indiceArgumento = 
					getsubopt (&argumentos, nomesArgumentos, &valorArgumento);
				switch (indiceArgumento)
				{
					case argumentoEmail:
						if (!valorArgumento)
						{
							printf ("Argumentos devem ser sempre no formato nome=valor\n");
							exit (VALOR_ARGUMENTO_INEXISTENTE);
						}
						if (strlen (valorArgumento) > COMPRIMENTO_MAXIMO_EMAIL)
						{
							printf ("Comprimento maximo email foi excedido\n");
							exit (COMPRIMENTO_MAXIMO_EMAIL_EXCEDIDO);
						}
						strcpy (email, valorArgumento);
						#ifdef __FreeBSD__
							if (strlen (argumentos) > 0)
							{
								if ((strlen (email) + 1 + strlen (argumentos)) > COMPRIMENTO_MAXIMO_EMAIL)
								{
									printf ("Comprimento maximo email foi excedido\n");
									exit (COMPRIMENTO_MAXIMO_NOME_EXCEDIDO);
								}
								
								strcat (email, " ");
								strcat (email, argumentos);
							}
						#endif
							break; /* case argumentoEmail */
					case argumentoIdioma:
							if (!valorArgumento)
							{                     
								printf ("Argumentos devem ser sempre no formato nome=valor\n");
								exit (VALOR_ARGUMENTO_INEXISTENTE);
							} 
							if (strlen (valorArgumento) > COMPRIMENTO_MAXIMO_IDIOMA)
							{
								printf ("Comprimento maximo idioma foi excedido\n");
								exit (COMPRIMENTO_MAXIMO_IDIOMA_EXCEDIDO);
							      	
							}

							strcpy (idioma, valorArgumento);
							
							#ifdef __FreeBSD__
							if (strlen (argumentos) > 0) 
							{ 
								if ((strlen (apelido) + 1 + strlen (argumentos)) > COMPRIMENTO_MAXIMO_APELIDO)
								{ 
									printf ("Comprimento maximo apelido foi excedido\n");
									exit (COMPRIMENTO_MAXIMO_APELIDO_EXCEDIDO);
								} 
								strcat (apelido, " ");
								strcat (apelido, argumentos);
							}
							
							#endif
							break; /* case argumentoApelido */
					case argumentoNomeUsuario:
							if (!valorArgumento)
							{
								printf ("Argumentos devem ser sempre no formato nome=valor\n");
								exit (VALOR_ARGUMENTO_INEXISTENTE);
							} 
							printf ("Depois --- argumentos: \"%s\"\n", argumentos);
							if (strlen (valorArgumento) > COMPRIMENTO_MAXIMO_NOME)
							{   
								printf ("Comprimento maximo nome foi excedido\n");
								exit (COMPRIMENTO_MAXIMO_NOME_EXCEDIDO);
							} 
							strcpy (nome, valorArgumento);
							#ifdef __FreeBSD__
								if (strlen (argumentos) > 0)
								{
									if ((strlen (nome) + 1 + strlen (argumentos)) > COMPRIMENTO_MAXIMO_NOME)
									{
										printf ("Comprimento maximo nome foi excedido\n");
										exit (COMPRIMENTO_MAXIMO_NOME_EXCEDIDO);
									}
									
									strcat (nome, " ");
									strcat (nome, argumentos);
								}
							
							#endif
								break;  /*case argumentoNomeUsuario */
					default:
								printf ("Opcao invalida\n");
				} /* switch (indiceArgumento) */
				optind++;
			}
		       	/* while (optind) */
			break; /* case 'C' */
		case '?':
		case 'h':
			printf ("Ajuda\n");
			break;	
		case 'N':
			printf ("Ncurses\n");
			break;
		default:
			printf ("Opcao invalida\n");
		} /* switch indiceArgumento*/
	} /* while opcaoCurta */
	
	printf ("Email: \"%s\"\n", email);
	printf ("Idioma: \"%s\"\n", idioma);
	printf ("Apelido: \"%s\"\n", apelido);
	printf ("Nome: \"%s\"\n", nome);
	
	return OK;
}

		


	

