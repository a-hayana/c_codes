#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Declaracao de variaveis
	char string1[10], string2[10];

	printf("----------------------------\n");
	printf("Copiando uma string em outra\n");
	printf("----------------------------\n");
	printf("\n");

	// Recebe uma string como entrada
	printf("Digite string1: ");
	scanf("%s", &string1);
	printf("\n");

	// Copia a string contida em "string1" para "string2"
	strcpy(string2,string1);

	// Impressao dos resultados
	printf("----------------------------\n");
	printf("string1 (original): %s\n", string1);
	printf("string2 (copia)   : %s\n", string2);
	printf("----------------------------\n");

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	system("PAUSE");
}
