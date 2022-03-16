#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/* Declaracao de variaveis */
	char  string[3][100];	/* Strings de caracteres */
	int   soma;			    	/* Resultado de uma soma de inteiros */
	float soma_f;		    	/* Resultado de uma soma de floats */
	int   inteiro;		    	/* Numero inteiro */
	int   i;			    		/* Contador */

	printf("--------------------------------------------------\n");
	printf("Conversao de strings em inteiros:\n");
	printf("--------------------------------------------------\n");

	/* Leitura das strings numericas (int) */
	for (i = 0 ; i < 2 ; i++)
	{
		printf("\nDigite uma string numerica (int): ");
		scanf("%s", &string[i]);
	}

	soma = atoi(string[0]) + atoi(string[1]);

	printf("\nSoma de \"%s\" com \"%s\": %d\n", string[0], string[1], soma);
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */

	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Conversao de strings em float:\n");
	printf("--------------------------------------------------\n");

	/* Leitura das strings numericas (float) */
	for (i = 0 ; i < 2 ; i++)
	{
		printf("\nDigite uma string numerica (float): ");
		scanf("%s", &string[i]);
	}

	soma_f = atof(string[0]) + atof(string[1]);

	printf("\nSoma de \"%s\" com \"%s\": %f\n", string[0], string[1], soma_f);
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */

	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Conversao de inteiros em strings:\n");
	printf("--------------------------------------------------\n");

	/* Leitura de um numero inteiro */
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &inteiro);

	printf("\nInteiro em string: %s\n", itoa(inteiro,string[2],10));
	printf("--------------------------------------------------\n");

	getchar();    /* Pausa  */


	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
}

