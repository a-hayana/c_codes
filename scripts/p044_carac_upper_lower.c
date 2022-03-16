#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	// Declaracao de variaveis
	char caracter1;
	char caracter2;
	char caracter3;

	printf("--------------------------------\n");
	printf("Uso de \"toupper\" e \"tolower\"\n");
	printf("--------------------------------\n");
	printf("\n");

	// Uso de "TOUPPER"
	printf("\nDigite um caractere MINUSCULO: ");
	caracter1 = getchar();
	caracter2 = toupper(caracter1);

	printf("\n-----------------------------------------------\n");
	printf("Convertendo com a funcao toupper( ) ==> %c\n", caracter2);
	printf("-----------------------------------------------\n\n");

	// Uso de "TOLOWER"
	caracter3 = tolower(caracter2);

	printf("\n-----------------------------------------------\n");
	printf("Convertendo com a funcao tolower( ) ==> %c\n", caracter3);
	printf("-----------------------------------------------\n");

	// Pausa na execucao do programa
	printf("\n\n\n\n");
    system("PAUSE");
}
