/*Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2019/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: Programa de Teste do calculo da Serie Harmonica
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 08:14:03 $
 * $Log: aula0809.c,v $
 * Revision 1.2  2020/10/22 08:14:03  david.lopes
 * aula0809.c
 *
 * Revision 1.1  2020/10/22 07:48:52  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:30  david.lopes
 * Initial revision
 **/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<getopt.h>
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
int main(int argc, char **argv){

	unsigned numeroBytes;
	unsigned indice;
	byte entradaHex[NUMERO_MAXIMO_ENTRADA_CODIFICADOR];
	char saidaBase64[NUMERO_MAXIMO_SAIDA_CODIFICADOR+1];
	char *validacao;
	int opcoes;
	char entradaBase64[NUMERO_MAXIMO_ENTRADA_DECODIFICADOR+1];
	byte saidaHex[NUMERO_MAXIMO_SAIDA_DECODIFICADOR];
	char *stringOpcoes= "Mm:Uu:Dd:Ee:Hh:Ss: :";
	while((opcoes=getopt(argc,argv,stringOpcoes))!=-1){
		switch(opcoes){
			
			case 'M':
			case 'm':			
				printf("\nOpcao dos escolhida\n");	
				if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
					printf("\n%s: <a1><a2>", argv[0]);
					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
	
				if(!strcmp(argv[optind], argv[optind+1])){
					exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
				}
				printf("%d\n", optind);
				ConverterArquivoFormatoUnixFormatoDos(argv[optind], argv[optind+1]);
				break;

			case 'U':
			case 'u':
					
				printf("\nOpcao Unix Escolhida\n");	
				if(argc!=NUMERO_ARGUMENTOS_ARQUIVOS){
				printf("\n%s: <a1><a2>", argv[0]);
				exit(NUMERO_ARGUMENTO_INVALIDO);
				}
	
				if(!strcmp(argv[optind], argv[optind+1])){
					exit(ARQUIVOS_DEVEM_SER_DIFERENTES);
				}
				ConverterArquivoFormatoDosFormatoUnix(argv[optind], argv[optind+1]);
				break;
			
			case 'E':
			case 'e':
				
				printf("\nOpcao Encoder escolhida\n");	
				numeroBytes = (unsigned)strtoul(argv[optind], &validacao, 10);
				if(*validacao!=EOS){
					printf("\n%sARGUMENTO_INVALIDO\n", argv[optind]);
					exit(ARGUMENTO_INVALIDO);
				}
				if(argc!=numeroBytes+3){
					printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
				for(indice=0; indice<numeroBytes; indice++){
					entradaHex[indice]= strtoul(argv[optind+1+indice],&validacao,16);
					if(*validacao!=EOS){
						printf("\n%cCaractere Invalido\n", *validacao);
						exit(ARGUMENTO_INVALIDO);
					}
				}
			
				if(CodificarBase64(entradaHex, numeroBytes, saidaBase64)!=ok)	
					printf("%d\n", CodificarBase64(entradaHex, numeroBytes, saidaBase64));
				else
					for(indice=0; saidaBase64[indice]!=EOS; indice++)
						printf("%c", saidaBase64[indice]);
				break;

			case 'D':
			case 'd':
	
				printf("\nOpcao Decoder escolhida\n");	
	
				if(argc!=NUMERO_ARGUMENTOS){
					printf("\n<%s>  <d1> <d2> <d3>\n", argv[0]);
					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
	
				for(indice=0; indice<strlen(argv[optind]); indice++){
					entradaBase64[indice] = argv[optind][indice];
				}
				DecodificarBase64(entradaBase64, saidaHex, &numeroBytes);
				printf("\n%u\n", numeroBytes);
				for(indice=0; saidaHex[indice]!=EOS; indice++)
					printf("%c ", saidaHex[indice]);
				printf("\n");

				break;
			
			case 'S':
			case 's':
					
				printf("\nOpcao Show escolhida\n");
				if(argc!=NUMERO_ARGUMENTOS_B){
					printf("\n%s: <a1><a2>\n", argv[0]);

					exit(NUMERO_ARGUMENTO_INVALIDO);
				}
				ExibirConteudoArquivo(argv[optind]);
				break;
		
		
			case 'H':
			case 'h':
				printf("\nm ou M - converter um arquivo texto do formato Unix para o formato Microsoft (DOS).");
				printf("\nu ou U - converter um arquivo texto do formato Microsoft para o formato Unix.");
				printf("\ne ou E - codificar o arquivo usando o algoritmo Base64.");
				printf("\nd ou D - decodificar o arquivo que foi previsamente codificado com o algoritmo Base64.");
				printf("\ns ou S - exibir o conteúdo do arquivo");
			        printf("\nh ou H - exibir uma mensagem contendo as informações sobre o uso do programa.\n");
				break;
			
			default:
				break;
		}
	}
		return OK;
}
/*$RCSfile: aula0809.c,v $*/
