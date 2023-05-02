/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 08:14:46 $
 * $Log: aula0810.c,v $
 * Revision 1.1  2020/10/22 08:14:46  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 **/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>
#include "aula08.h"

#define EOS					'\0'
#define OK					0
#define NUMERO_ARGUMENTOS_B			3
#define NUMERO_ARGUMENTOS			3
#define NUMERO_ARGUMENTO_INVALIDO		1
#define ARGUMENTO_INVALIDO			4
#define ARQUIVOS_DEVEM_SER_DIFERENTES		2
#define NUMERO_ARGUMENTOS_ARQUIVOS		3
#define NUMERO_MAXIMO_ENTRADA_CODIFICADOR	1024
#define NUMERO_MAXIMO_SAIDA_CODIFICADOR		1368
#define NUMERO_MAXIMO_ENTRADA_DECODIFICADOR	1368
#define NUMERO_MAXIMO_SAIDA_DECODIFICADOR	1024

int
main (int argc, char **argv)
{
  unsigned numeroBytes;
  byte entradaHex[NUMERO_MAXIMO_ENTRADA_CODIFICADOR];
  char saidaBase64[NUMERO_MAXIMO_SAIDA_CODIFICADOR];
  char *validacao;
  char entradaBase64[NUMERO_MAXIMO_ENTRADA_DECODIFICADOR];
  byte saidaHex[NUMERO_MAXIMO_SAIDA_DECODIFICADOR];
  char *opcoesCurtas = "m:M:u:U:d:D:e:E:s:S:h:H::";
  int opcao;
  int comando;
  opterr = 0;
  unsigned indice;

  static struct option opcoesLongas [] = {
    {"dos", 1, NULL, 'm'},
    {"unix", 1, NULL, 'u'},
    {"encode", 1, NULL, 'e'},
    {"decode", 1, NULL, 'd'},
    {"help", 0, NULL, 'h'},
    {"show", 0, NULL, 's'},
    {"unix", 1, NULL, 'u'},
    {NULL, 0, NULL, 0}
  };

  for (indice = 0; indice < argc; indice++)
    printf ("Arg#%u: \"%s\"\n", indice, argv [indice]);

  while ((opcao = getopt_long (argc, argv, opcoesCurtas, opcoesLongas, &comando)) != -1)
  {
    switch (opcao)
    {
      case 'm':
      case 'M':	
	if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
		printf("\n%s: <a1><a2>\n", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	printf("\n%s\n%s\n", argv[optind-1], argv[optind]);		
	
	if(!strcmp(argv[optind-1], argv[optind])){
		exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
	}
	ConverterArquivoFormatoUnixFormatoDos(argv[optind-1], argv[optind]);
      break;

      case 'u':
      case 'U':	
	if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
		printf("\n%s: <a1><a2>", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	printf("\n%s\n%s\n", argv[optind-1], argv[optind]);	
	if(!strcmp(argv[optind-1], argv[optind])){
		exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
	}
	ConverterArquivoFormatoDosFormatoUnix(argv[optind-1], argv[optind]);
       
      break;

      case 'e':
      case 'E':
        printf ("Opcao Encode selecionada\n");	
       		printf("%d ", optind);
		printf("\nE\n");	
		numeroBytes = (unsigned)strtoul(argv[optind-1], &validacao, 10);
		
		if(*validacao!=EOS){	
			printf("\nARGUMENTO_INVALIDO\n");
			exit(ARGUMENTO_INVALIDO);
		}
		if(argc!=numeroBytes+3){
			printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
			exit(NUMERO_ARGUMENTO_INVALIDO);
		}
		for(indice=0; indice<numeroBytes; indice++){
			entradaHex[indice]= strtoul(argv[optind+indice], &validacao, 16);
			if(*validacao!=EOS){
				printf("\nCaractere Invalido: %c\n", *validacao);
				exit(ARGUMENTO_INVALIDO);
			}
		}
		entradaHex[indice]=EOS;
		if(CodificarBase64(entradaHex, numeroBytes, saidaBase64)!=ok)	
			printf("%d\n", CodificarBase64(entradaHex, numeroBytes, saidaBase64));
		else
			for(indice=0; saidaBase64[indice]!=EOS; indice++)
				printf("%c", saidaBase64[indice]);
	break;
      
      case 'd':
      case 'D':
        printf ("Opcao Decode selecionada\n");	
       
	printf("\nD\n");	
	for(indice=0; indice<1024; indice++)
		entradaBase64[indice]=EOS;
	
	for(indice=0; indice<1402; indice++)
		saidaHex[indice]=EOS;
	if(argc!=NUMERO_ARGUMENTOS){
		printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	
	
	for(indice=0; indice<strlen(argv[optind-1]); indice++){
		entradaBase64[indice] = argv[optind-1][indice];
	}
	DecodificarBase64(entradaBase64, saidaHex, &numeroBytes);
	printf("\n%u\n", numeroBytes);
	for(indice=0; saidaHex[indice]!=EOS; indice++)
		printf("%c ", saidaHex[indice]);
	
	break;
      
      case 's':
      case 'S':
        printf ("Opcao Show selecionada\n");	
	if(argc!=NUMERO_ARGUMENTOS_B){
		printf("\n%s: <a1><a2>\n", argv[0]);
		exit(NUMERO_ARGUMENTO_INVALIDO);
	}
	ExibirConteudoArquivo(argv[optind-1]);
       
	break;
      case 'h':
      case 'H':
        printf ("Opcao Help selecionada\n");	
       
	printf("\n-m ou -M ou --dos - converter um arquivo texto do formato Unix para o formato Microsoft (DOS).");
	printf("\n-u ou -U ou --unix - converter um arquivo texto do formato Microsoft para o formato Unix.");
	printf("\n-e ou -E ou --encoder - codificar o arquivo usando o algoritmo Base64.");
	printf("\n-d ou -D ou --decoder - decodificar o arquivo que foi previsamente codificado com o algoritmo Base64.");
	printf("\n-s ou -S ou --show - exibir o conteúdo do arquivo"); 
	printf("\n-h ou -H ou --help - exibir uma mensagem contendo as informacoes sobre o uso do programa" );
       
	break;
      default:
	printf("Opcao Invalida\n");
	break;
  }
 }
}
