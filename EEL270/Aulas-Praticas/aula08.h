/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2020/4 - PLE-1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: David Lopes Gomes
 * Descricao: arquivo .h do programa de calculo de serie alternada
 *
 * $Author: david.lopes $
 * $Date: 2020/10/22 08:06:15 $
 * $Log: aula08.h,v $
 * Revision 1.1  2020/10/22 08:06:15  david.lopes
 * Initial revision
 *
 * Revision 1.1  2020/10/08 20:28:19  david.lopes
 * Initial revision
 *
 
 *
 */
#ifndef AULA0801
#define AULA0801			"@(#)aula0801.h $Revision: 1.1 $"


typedef unsigned char byte;

typedef enum {
	ok,
	argumentoInvalido,
	entradaNULL,
	saidaNULL,
	numeroBytesExcedido, 
	erroComprimentoEntrada,
	erroQuantidadeArgumento,
	caractereBase64Invalido, 
	originalNull,
	convertidoNull,
	arquivoOriginalNull,
	arquivoConvertidoNull,
	arquivoJaEstaNoFormatoDos,
	arquivoJaEstaNoFormatoUnix,
	tamanhoBufferInvalido,
	comprimentoEntradaInvalido
}tipoErros;

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes);

tipoErros
ConverterArquivoFormatoUnixFormatoDos (char *original, char *convertido);

tipoErros
ConverterArquivoFormatoDosFormatoUnix (char *original, char *convertido);

tipoErros
ExibirConteudoArquivo (char *);

#endif
/*$RCSfile: aula08.h,v $*/
