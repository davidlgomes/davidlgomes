
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
 * $Date: 2020/10/09 04:36:12 $
 * $Log: aula0703.c,v $
 * Revision 1.2  2020/10/09 04:36:12  david.lopes
 * aula0703.c
 *
 * Revision 1.1  2020/10/09 04:25:01  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/02 20:59:06  david.lopes
 * Initial revision
 *
 *
 * */


#ifdef __linux__
	#define _XOPEN_SOURCE	600
	#define _POSIX_X_SOURCE	10000
#endif
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "aula0703.h"


tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera){
	unsigned linha, coluna;
	system("clear");
	usleep(tempoEspera);
	if (!monitor)
		return monitorNULL;

	if(numeroMaximoLinhas>NUMERO_MAXIMO_LINHAS)
		return tamanhoLinhaInvalida;
	if(numeroMaximoColunas>NUMERO_MAXIMO_COLUNAS)
		return tamanhoColunaInvalida;
	
	for(linha=0; linha<numeroMaximoLinhas; linha++){
		printf("\n");
		for(coluna=0; coluna<numeroMaximoColunas; coluna++){
			if((monitor[linha][coluna]!=aceso)&&(monitor[linha][coluna]!=apagado))
					return argumentoMonitorInvalido;
			printf("%c ", (monitor[linha][coluna]==aceso)?ACESO:APAGADO);  
			 
				 
		}
	}
	printf("\n\n");
	/*	
	for(linha=0; linha<COMPRIMENTO_LINHA_MATRIZ_A; linha++){
		for(coluna=0; coluna<COMPRIMENTO_COLUNA_MATRIZ_A; coluna++){
			if(matrizA[linha][coluna]>9)
				return argumentosInvalidosMatrizA;
		}
	}
	for(linha=0; linha<COMPRIMENTO_LINHA_MATRIZ_B; linha++){
		for(coluna=0; coluna<COMPRIMENTO_COLUNA_MATRIZ_B; coluna++){
			if(matrizB[linha][coluna]>9)
				return argumentosInvalidosMatrizB;
		}
	}*/
	
	return ok;
}

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, useconds_t tempoEspera){
	unsigned linha, coluna;
	if (!monitor)
		return monitorNULL;

	if(numeroMaximoLinhas>NUMERO_MAXIMO_LINHAS)
		return tamanhoLinhaInvalida;
	if(numeroMaximoColunas>NUMERO_MAXIMO_COLUNAS)
		return tamanhoColunaInvalida;
	
	for(linha=0; linha<numeroMaximoLinhas; linha++){
		for(coluna=0; coluna<numeroMaximoColunas; coluna++){
			monitor[linha][coluna]=apagado;  
		}	
	}
	printf("\n\n");
	MostrarMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);
	printf("\n\n");

	return ok;
}

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linhaCantoSuperior, unsigned colunaCantoSuperior, unsigned linhaCantoInferior, unsigned colunaCantoInferior, useconds_t tempoEspera){
	unsigned indice;
	if(!monitor){
		printf("\nErro de Passagem\n");
		return monitorNULL;
	}
	if(numeroMaximoLinhas>NUMERO_MAXIMO_LINHAS){
		printf("\nnumero de linhas deve ser <250\n");
		return tamanhoLinhaInvalida;
	}
	if(numeroMaximoColunas>NUMERO_MAXIMO_COLUNAS){
		printf("\nNumero de colunas deve ser <800\n");
		return tamanhoColunaInvalida;
	}
	if(linhaCantoSuperior==0){
		printf("\nlinhaCantoSuperior deve ser >0\n");
		return medidasLinhaCantoSuperiorInvalida;
	}
	if(colunaCantoSuperior==0){
		printf("\ncolunaCantoSuperior deve ser >0\n");
		return medidasColunaCantoSuperiorInvalida;
	}
	if(linhaCantoInferior==0){
		printf("\nlinhaCantoInferior deve ser>0\n");
		return medidasLinhaCantoInferiorInvalida;
	}
	if(colunaCantoInferior==0){
		printf("\ncolunaCantoInferior deve ser >0\n");
		return medidasColunaCantoInferiorInvalida;
	}
	if(colunaCantoSuperior>numeroMaximoColunas){
		printf("\ncolunaCanto Superior deve ser < numeroMaximoColunas\n");
		return comprimentoColunaCantoSuperiorInvalida;
	}
	if(linhaCantoSuperior>numeroMaximoLinhas){
		printf("\nlinhaCantoSuperior deve ser < numeroMaximoLinhas\n");
		return comprimentoLinhaCantoSuperiorInvalida;
	}
	if(colunaCantoInferior>numeroMaximoColunas){
		printf("\ncolunaCantoInferior deve ser < numeroMaximoColunas\n");
		return comprimentoColunaCantoInferiorInvalida;
	}
	if(linhaCantoInferior>numeroMaximoLinhas){
		printf("\nlinhaCantoInferior deve ser < numeroMaximoLinhas\n");
		return comprimentoLinhaCantoInferiorInvalida;
	}
	if(linhaCantoInferior<=linhaCantoSuperior){
		printf("\nlinhaCantoInferior nÃo pode ser <= linhaCantoSuperior\n");
		return ordemLinhaAlternada;
	}
	if(colunaCantoSuperior<=colunaCantoInferior){
		printf("\ncolunaCantoSuperior nÃo pode ser <= colunaCantoInferior\n");
		return ordemColunaAlternada;
	}
	for(indice=colunaCantoInferior; indice<=colunaCantoSuperior; indice++){
		monitor[linhaCantoInferior-1][indice-1]=aceso;/*inferior*/
		monitor[linhaCantoSuperior-1][indice-1]=aceso; /*Superior*/

	}
	for(indice=linhaCantoInferior; indice>=linhaCantoSuperior; indice--){
		monitor[indice-1][colunaCantoInferior-1]=aceso; /*lateral esquerda*/
		monitor[indice-1][colunaCantoSuperior-1]=aceso; /*lateral direita*/

	}
	MostrarMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);


	return ok;
}


tipoErros
PreencherPoligono (tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS], unsigned numeroMaximoLinhas, unsigned numeroMaximoColunas, unsigned linha, unsigned coluna, useconds_t tempoEspera){

	if(!monitor)
		return monitorNULL;
	
	if(numeroMaximoLinhas>NUMERO_MAXIMO_LINHAS)
		return tamanhoLinhaInvalida;
	
	if(numeroMaximoColunas>NUMERO_MAXIMO_COLUNAS)
		return tamanhoColunaInvalida;
	
	if(monitor[linha][coluna]==apagado){
		monitor[linha][coluna]=aceso;
		MostrarMonitor(monitor, numeroMaximoLinhas, numeroMaximoColunas, tempoEspera);
		if(linha<numeroMaximoLinhas)
			PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha+1, coluna, tempoEspera);
		if(linha>0)
			PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha-1, coluna, tempoEspera);
		if(coluna<numeroMaximoColunas)
			PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha, coluna+1, tempoEspera);
		if(coluna>0)
			PreencherPoligono(monitor, numeroMaximoLinhas, numeroMaximoColunas, linha, coluna-1, tempoEspera);
        }


	return ok;
}
