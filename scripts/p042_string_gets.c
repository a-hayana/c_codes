/**
 * UNIVERSIDADE FEDERAL DO AMAZONAS
 * INSTITUTO DE CIENCIAS EXATAS
 * DEPARTAMENTO DE CIENCIA DA COMPUTACAO
 * 
 * Disciplina: Algoritmos e Estrutura de Dados (AED I)
 * Programa    "Ex_gets"
 * Objetivo:   Exemplificar uso do comando "gets"
 * Autor:      Leandro Silva Galvao de Carvalho
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	/* Declaracao de variaveis */
	char  string1[30];
	char  string2[30];

	/* Leitura de uma string via "gets" */
	printf("Digite uma string (ateh 30 caracteres):\n");
	gets(string1);

	/* Leitura de uma string via "scanf" */
	printf("\nDigite uma outra string (ateh 30 caracteres):\n");
	scanf("%s", string2);

	/* Impressao de valores */
	printf("\n-----------------------------------------");
	printf("\nString1 (usando \"gets\") : %s\n", string1);
	printf("\nString2 (usando \"scanf\"): %s\n", string2);
	printf("-----------------------------------------\n");


	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
}
