/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 08:21:43 $
 * $Log: aula0811.c,v $
 * Revision 1.1  2020/10/22 08:21:43  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 **/


#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#define _XOPEN_SOURCE 500 
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h> 
#include "aula08.h"

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
	portuguese,
        english	
} indicesArgumentos;

/*typedef enum
{
	english,
	portuguese       
} language;*/
int
main (int argc, char **argv)
{
	char *opcoesCurtas = "m:M:u:U:e:E:d:D:s:S:h:H::";
	int opcao;
	//int comando;
	opterr = 0;
	//unsigned indice;

	static struct option opcoesLongas [7] = {
		{"dos", 1, NULL, 'm'},
		{"unix", 1, NULL, 'u'},
		{"encode", 1, NULL, 'e'},
		{"decode", 1, NULL, 'd'},
		{"help", 1, NULL, 'h'},
		{"show", 0, NULL, 's'},
		{NULL, 0, NULL, 0}
	};
  
  char *nomesArgumentos [ ] = {
	  "input",
	  "output",
	  "language",
	  NULL
  };
 
	//int opcaoCurta;
	int opcaoLonga;
	int indiceArgumento;
	char *argumentos, *valorArgumento;
	//char email [COMPRIMENTO_MAXIMO_EMAIL + 1];
	char idioma [COMPRIMENTO_MAXIMO_IDIOMA + 1];
	//char apelido [COMPRIMENTO_MAXIMO_APELIDO + 1];
	//char nome [COMPRIMENTO_MAXIMO_NOME + 1];
	opterr = 0; /* desabilita exibicao de erro */  
 	
	//char idioma[COMPRIMENTO_MAXIMO_IDIOMA];
			
	memset (idioma, 0x00, COMPRIMENTO_MAXIMO_IDIOMA + 1);
	/*memset (email, 0x00, COMPRIMENTO_MAXIMO_EMAIL + 1);
	memset (idioma, 0x00, COMPRIMENTO_MAXIMO_IDIOMA + 1);
	memset (apelido, 0x00, COMPRIMENTO_MAXIMO_APELIDO + 1);
	memset (nome, 0x00, COMPRIMENTO_MAXIMO_NOME + 1);*/


	/*for (indice = 0; indice < argc; indice++)
	printf ("Arg#%u: \"%s\"\n", indice, argv [indice]);*/

	while ((opcao = getopt_long (argc, argv, opcoesCurtas, opcoesLongas, &opcaoLonga)) != -1){
		switch (opcao){
      			case 'm':
      			case 'M':
				/*printf("\nMicrosoft\n");	
				if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
					printf("\n%s: <a1><a2>", argv[0]);
					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
	
				if(!strcmp(argv[1], argv[2])){
					exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
				}
				ConverterArquivoFormatoUnixFormatoDos(argv[1], argv[2]);
       
      				printf ("Optarg: %s\n", optarg);
				printf ("Optind: %i\n", optind);
      				*/
      				break;

			case 'u':
      			case 'U':
				/*printf("\nUnix\n");	
				if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
					printf("\n%s: <a1><a2>", argv[0]);
					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
	
				if(!strcmp(argv[1], argv[2])){
					exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
				}
				ConverterArquivoFormatoDosFormatoUnix(argv[1], argv[2]);
       
      				printf ("Optarg: %s\n", optarg);
       				printf ("Optind: %i\n", optind);
       				*/
      				break;

			case 'e':
      			case 'E':
       				/* printf ("Opcao Encode selecionada\n");	
       
       				printf ("Optarg: %s\n", optarg);
        			printf ("Optind: %i\n", optind);
      				 */
				break;
      
      			case 'd':
      			case 'D':
       				/* printf ("Opcao Decode selecionada\n");	
       
       				printf ("Optarg: %s\n", optarg);
        			printf ("Optind: %i\n", optind);
      				 */
      
			case 's':
      			case 'S':
       				/* printf ("Opcao Show selecionada\n");	
       
        			printf ("Optarg: %s\n", optarg);
        			printf ("Optind: %i\n", optind);
       				*/

      			case 'h':
      			case 'H':
        			argumentos = argv [optind];
				printf ("Antes --- argumentos: \"%s\"\n", argumentos);
				indiceArgumento=getsubopt (&argumentos, nomesArgumentos, &valorArgumento);
				printf("%s", argv[optind]);
				switch(indiceArgumento){

					case portuguese:
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
						printf ("Opcao Help selecionada\n");	
						printf("\n-m ou -M ou --dos - converter um arquivo texto do formato Unix para o formato Microsoft (DOS).");
						printf("\n-u ou -U ou --unix - converter um arquivo texto do formato Microsoft para o formato Unix.");
						printf("\n-e ou -E ou --encoder - codificar o arquivo usando o algoritmo Base64.");
						printf("\n-d ou -D ou --decoder - decodificar o arquivo que foi previsamente codificado com o algoritmo Base64.");
						printf("\n-s ou -S ou --show - exibir o conteúdo do arquivo"); 
				    		printf("\n-h ou -H ou --help - exibir uma mensagem, no idioma selecionado contendo as informacoes sobre o uso do programa " );
       						break;
				        case english:                                               
						printf("\nHelp option selected");	
						printf("\n-m ou -M ou --dos - convert a text file from Unix format to Microsoft (DOS) format.");
						printf("\n-u ou -U ou --unix - convert a text file from Microsoft format to Unix format.");
						printf("\n-e ou -E ou --encoder - encode the file using the Base64 algorithm.");
						printf("\n-d ou -D ou --decoder - decode the file that was previously encoded with the Base64 algorithm.");
						printf("\n-s ou -S ou --show - display the contents of the file."); 
						printf("\n-h ou -H ou --help - display a message, in the selected language, containing information about using the program. " );
       						break;
					default:
						printf("\nInvalid option!\nDefault language selected.");	
						printf("\n-m ou -M ou --dos - convert a text file from Unix format to Microsoft (DOS) format.");
						printf("\n-u ou -U ou --unix - convert a text file from Microsoft format to Unix format.");
						printf("\n-e ou -E ou --encoder - encode the file using the Base64 algorithm.");
						printf("\n-d ou -D ou --decoder - decode the file that was previously encoded with the Base64 algorithm.");
						printf("\n-s ou -S ou --show - display the contents of the file."); 
						printf("\n-h ou -H ou --help - display a message, in the selected language, containing information about using the program. " );
						break;
      				/*printf ("Optarg: %s\n", optarg);
       				 printf ("Optind: %i\n", optind);
				 */
				}
      			default:
				printf("Opcao Invalida\n");
				break;
		}
 	}
}
