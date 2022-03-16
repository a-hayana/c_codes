#include <stdio.h>
#include <stdlib.h>
#include <string.h>      /* fornece funcoes para manipulacao de STRINGS */

int main()
{
	/* Declaracao de variaveis */
	char string[3][100];	/* Strings de caracteres */
	int  tam[3];			/* Comprimento das strings 1, 2 e 3 */
	int  i;					/* Contador */
	int  retorno;			/* Variavel de controle */

	printf("\nDigite string[0]: ");
	scanf("%s", &string[0]);

	printf("\nDigite string[1]: ");
	scanf("%s", &string[1]);

	printf("\nDigite string[2]: ");
	scanf("%s", &string[2]);

	/* Comprimento das strings: */
	printf("\n\n");
	printf("---------------------------------------\n");
	printf("Comprimento de strings.\n");
	printf("Comando: strlen (String Length).\n");
	printf("---------------------------------------\n");

	for (i = 0 ; i <= 2 ; i++)
	{
		tam[i] = strlen(string[i]);	/* Funcao "strlen" para calcular o comprimento da string */
		printf("Tamanho de string[%d]: %d\n", i, tam[i]);
	}
	printf("---------------------------------------\n");

	getchar();	/* Pausa  */
	getchar();	/* Pausa  */


	/* Unindo as strings: */
	strcat(string[0], string[1]);	/* String concatenada eh armazena no 1o. argumento */

	printf("\n\n");
	printf("---------------------------------------\n");
	printf("Unindo duas strings.\n");
	printf("Comando: strcat (String Concatenation).\n");
	printf("---------------------------------------\n");

	printf("\nUnindo string[1] a string[0]: %s\n", string[0]);
	printf("---------------------------------------\n");

	getchar();	/* Pausa  */


	/* Atribuicao de valores `as strings */
	strcpy(string[0], "Engenharia");
	strcpy(string[1], "Computacao");       /* Inicial maiuscula */
	strcpy(string[2], "computacao");       /* Inicial minuscula */

	/* Comparacao de strings */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Comparacao de strings.\n");
	printf("Comando: strcmp (String Compare).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		retorno = strcmp(string[i], string[i+1]);

		if (retorno == 0)
			printf("As strings \"%s\" e \"%s\" sao iguais.\n", string[i], string[i+1]);
		else if (retorno < 0)
			printf("A string \"%s\" eh maior que \"%s\".\n", string[i+1], string[i]);
		else
			printf("A string \"%s\" eh maior que \"%s\".\n", string[i], string[i+1]);
	}
	printf("--------------------------------------------------\n");
	
	getchar();
	


	/* Comparacao de strings, ignorando o caso */
	printf("\n\n\n");
	printf("--------------------------------------------------\n");
	printf("Comparacao de strings ignorando o caso.\n");
	printf("Comando: strcmpi (String Compare Ignore).\n");
	printf("--------------------------------------------------\n");

	for (i = 0 ; i < 2 ; i++)
	{
		retorno = strcmpi(string[i], string[i+1]);

		if(retorno == 0)
			printf("As strings \"%s\" e \"%s\" sao iguais.\n", string[i], string[i+1]);
		else if(retorno < 0)
			printf("A string \"%s\" eh maior que \"%s\".\n", string[i+1], string[i]);
		else
			printf("A string \"%s\" eh maior que \"%s\".\n", string[i], string[i+1]);
	}
	printf("--------------------------------------------------\n");



	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
}
