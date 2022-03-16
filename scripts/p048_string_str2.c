#include <stdio.h>
#include <stdlib.h>
#include <string.h>      /* fornece funcoes para manipulacao de STRINGS */

int main()
{
	/* Declaracao de variaveis */
	char string[3][100];		/* Strings de caracteres */
	char temp[100];			/* String temporaria */
	int  i;						/* Contador */
	int  retorno;				/* Variavel de controle */

	/* Atribuicao de valores `as strings */
	strcpy(string[0], "Engenharia");
	strcpy(string[1], "Computacao");

	/* Conversao de strings em MAIUSCULAS */
	/* Notar a diferenca com a funcao "toupper" (conversao de caractere) */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Conversao de string para MAIUSCULAS.\n");
	printf("Comando: strupr (String Upper).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		strcpy(temp, string[i]); /* Atribui valor de string[i] a temp */
		printf("String \"%s\" em MAIUSCULAS: \"%s\"\n", temp, strupr(string[i]));
		/* printf("String \"%s\" em MAIUSCULAS: \"%s\"\n", string[i], strupr(string[i])); */
		/* o uso da espressao comentada acima acarreta na modificacao de string[i] antes de */
		/* sua impressao na tela */
	}
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */


	/* Conversao de strings em MINUSCULAS */
	/* Notar a diferenca com a funcao "tolower" (conversao de caractere) */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Conversao de string para MINUSCULAS.\n");
	printf("Comando: strlwr (String Lower).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		strcpy(temp, string[i]);           /* Atribui valor de string[i] a temp */
		printf("String \"%s\" em MINUSCULAS: \"%s\"\n", temp, strlwr(string[i]));
	}
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */


	/* Inversao do conteudo de strings */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Inversao do conteudo de strings.\n");
	printf("Comando: strrev (String Reversion).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		strcpy(temp, string[i]);           /* Atribui valor de string[i] a temp */
		printf("Invertendo string \"%s\": \"%s\"\n", temp, strrev(string[i]));
	}
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */


	/* Substituicao do conteudo de strings */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Substituicao do conteudo de strings.\n");
	printf("Comando: strset (String Set).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		strcpy(temp, string[i]);           /* Atribui valor de string[i] a temp */
		printf("Substituindo string \"%s\": \"%s\"\n", temp, strset(&string[i][3],'*'));
	}
	printf("--------------------------------------------------\n");


	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
}

