#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	char  string1[30];
	char  string2[30];

	// Leitura de uma string via "gets"
	// Nao requer "&" e aceita espaco em branco como parte da string
	printf("Digite uma string (ateh 29 caracteres):\n");
	gets(string1);

	// Leitura de uma string usando o comando "scanf"
	// O "&" com scanf para string é opcional
	// Interpreta espaco em branco como fim da string
	printf("\nDigite uma outra string (ateh 29 caracteres):\n");
	scanf("%s", string2);

	// Impressao de valores
	printf("\n-----------------------------------------");
	printf("\nString1 (usando \"gets\") : %s\n", string1);
	printf("\nString2 (usando \"scanf\"): %s\n", string2);
	printf("-----------------------------------------\n");

	// Pausa na execucao do programa
	printf("\n\n\n\n");

	system("PAUSE");

	return 0;
}
