
/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo implementacao do programa de validacao PIS/PASEP
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 08:08:11 $
 * $Log: aula0804.c,v $
 * Revision 1.1  2020/10/22 08:08:11  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:08  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/02 20:59:06  david.lopes
 * Initial revision
 *
 *
 * */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "aula08.h"
#define COMPRIMENTO_MAXIMO_BUFFER 500
#define	OK				0	
#define	EOS				'\0'	
struct dataTempo{
	unsigned dia, mes, ano;
	unsigned hora, minuto, segundo;
};
tipoErros
ConverterArquivoFormatoUnixFormatoDos (char *original, char *convertido){
	unsigned indice=0;
	unsigned tamanhoBuffer=0;
	char ano[5], mes[3], dia[3], hora[3], minuto[3], segundo[3], buffer[COMPRIMENTO_MAXIMO_BUFFER];
	struct tm tempo;
	time_t tempoSegundos;
	time(&tempoSegundos);
	tempo = *localtime(&tempoSegundos);
	struct dataTempo agora;
	agora.ano     = tempo.tm_year+1900;
	agora.mes     = tempo.tm_mon+1;
	agora.dia     = tempo.tm_mday;
	agora.hora    = tempo.tm_hour;
	agora.minuto  = tempo.tm_min;
	agora.segundo = tempo.tm_sec;
	sprintf(ano, "%d", agora.ano);
	sprintf(mes, "%d", agora.mes);
	sprintf(dia, "%d", agora.dia);
	sprintf(hora, "%d", agora.hora);
	sprintf(minuto, "%d", agora.minuto);
	sprintf(segundo, "%d", agora.segundo);
	char nomeArquivoTemporario[60] = "nomeArquivoTemporario.XXXXXX";
	strcat(nomeArquivoTemporario, "backup-");
	strcat(nomeArquivoTemporario, ano);
	strcat(nomeArquivoTemporario, mes);
	strcat(nomeArquivoTemporario, dia);
	strcat(nomeArquivoTemporario, "_");
	strcat(nomeArquivoTemporario, hora);
	strcat(nomeArquivoTemporario, minuto);
	strcat(nomeArquivoTemporario, segundo);
	FILE *arquivoTemporario;
	int descritor = mkstemp(nomeArquivoTemporario);
	if (!original){
		printf("\nErro ao passar nome do arquivo de Entrada\n");
		return originalNull;
	}
	
	if(!convertido){
		printf("\nErro ao passar arquivo de Saida\n");
		/*mkstemp(arquivoTemporario.backup-AAAAMMDD_hhmmss); */
		return convertidoNull;
	}
	FILE *arquivoOriginal;
	FILE *arquivoConvertido;
	
	arquivoOriginal = fopen(original, "r");
	
	if (arquivoOriginal==NULL){
		printf("\nErro: Não foi possível Abrir o Arquivo de Entrada\n");
		return arquivoOriginalNull;
	}

        arquivoConvertido = fopen(convertido, "w");
	
	if (!arquivoConvertido){
		arquivoTemporario = fdopen(descritor, "r");
		fprintf(arquivoTemporario, "OLA MUNDO");
		printf("\nErro ao passar arquivo de saida\n");
		fclose(arquivoOriginal);
		return arquivoConvertidoNull;
	}

	while(fgets(buffer, COMPRIMENTO_MAXIMO_BUFFER, arquivoOriginal)!=NULL){
		tamanhoBuffer=strlen(buffer);
		if(tamanhoBuffer>COMPRIMENTO_MAXIMO_BUFFER)
			return tamanhoBufferInvalido;
		for(indice=0; indice<strlen(buffer); indice++){
			if(buffer[indice]=='\r')
				return arquivoJaEstaNoFormatoDos;
		}			
		
		if(buffer[tamanhoBuffer-1]=='\n'){
			buffer[tamanhoBuffer-1]=EOS;
			fprintf(arquivoConvertido, "%s\r\n", buffer);
		}		
		else{
			fprintf(arquivoConvertido, "%s\r\n", buffer);
		}

		
		
	}
	printf("\n%s convertido com sucesso\n", arquivoConvertido );
	fclose(arquivoOriginal);
	fclose(arquivoConvertido);


	return ok;
}

tipoErros
ConverterArquivoFormatoDosFormatoUnix (char *original, char *convertido){
	unsigned indice;
	unsigned tamanhoBuffer=0;	
	char ano[5], mes[3], dia[3], hora[3], minuto[3], segundo[3], buffer[COMPRIMENTO_MAXIMO_BUFFER];
	struct tm tempo;
	time_t tempoSegundos;
	time(&tempoSegundos);
	tempo = *localtime(&tempoSegundos);
	struct dataTempo agora;
	agora.ano     = tempo.tm_year+1900;
	agora.mes     = tempo.tm_mon+1;
	agora.dia     = tempo.tm_mday;
	agora.hora    = tempo.tm_hour;
	agora.minuto  = tempo.tm_min;
	agora.segundo = tempo.tm_sec;
	sprintf(ano, "%d", agora.ano);
	sprintf(mes, "%d", agora.mes);
	sprintf(dia, "%d", agora.dia);
	sprintf(hora, "%d", agora.hora);
	sprintf(minuto, "%d", agora.minuto);
	sprintf(segundo, "%d", agora.segundo);
	char nomeArquivoTemporario[60] = "nomeArquivoTemporario.XXXXXX";
	strcat(nomeArquivoTemporario, "backup-");
	strcat(nomeArquivoTemporario, ano);
	strcat(nomeArquivoTemporario, mes);
	strcat(nomeArquivoTemporario, dia);
	strcat(nomeArquivoTemporario, "_");
	strcat(nomeArquivoTemporario, hora);
	strcat(nomeArquivoTemporario, minuto);
	strcat(nomeArquivoTemporario, segundo);
	FILE *arquivoTemporario;
	int descritor = mkstemp(nomeArquivoTemporario);
	if (!original){
		printf("\nErro ao passar nome do arquivo de Entrada\n");
		return originalNull;
	}
	
	if(!convertido){
		printf("\nErro ao passar arquivo de Saida\n");
		/*mkstemp(arquivoTemporario.backup-AAAAMMDD_hhmmss); */
		return convertidoNull;
	}
	FILE *arquivoOriginal;
	FILE *arquivoConvertido;
	
	arquivoOriginal = fopen(original, "r");
	
	if (arquivoOriginal==NULL){
		printf("\nErro: Não foi possível Abrir o Arquivo de Entrada\n");
		return arquivoOriginalNull;
	}

        arquivoConvertido = fopen(convertido, "w");
	
	if (!arquivoConvertido){
		/*arquivoTemporario = fdopen(descritor, "r");
		fprintf(arquivoTemporario, "OLA MUNDO");*/
		printf("\nErro ao passar arquivo de saida\n");
		fclose(arquivoOriginal);
		return arquivoConvertidoNull;
	}

	while(fgets(buffer, COMPRIMENTO_MAXIMO_BUFFER, arquivoOriginal)!=NULL){
		tamanhoBuffer=strlen(buffer);
		if(tamanhoBuffer>COMPRIMENTO_MAXIMO_BUFFER)
			return tamanhoBufferInvalido;
		for(indice=0; indice<tamanhoBuffer-1; indice++)
			if((buffer[indice]!='\r')&&(buffer[indice+1]=='\n')){
				return arquivoJaEstaNoFormatoUnix;
			}
		if((buffer[tamanhoBuffer-2]=='\r')&&(buffer[tamanhoBuffer-1]=='\n')){
			buffer[tamanhoBuffer-2]= '\n';
			buffer[tamanhoBuffer-1]= EOS;
			fprintf(arquivoConvertido, "%s", buffer);
			
		}		
		
		else
			fprintf(arquivoConvertido, "%s", buffer);
	}
	printf("\n%s convertido com sucesso\n", arquivoConvertido );
	fclose(arquivoOriginal);
	fclose(arquivoConvertido);

	return ok;
}


/*$RCSfile: aula0804.c,v $*/
