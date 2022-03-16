#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 101

int main()
{
	/* Declaracao de variaveis */
	int vet[TAM_MAX];   /* Vetor a ser inserido */
	int i;              /* Contador */
	int tam;		    /* Tamanho do vetor */
	int aux;		    /* Variavel auxiliar */

	printf("==================================================\n");
	printf("Este programa inverte a ordenacao dos elementos de\n");
	printf("um vetor de ateh %d elementos.\n", TAM_MAX);
	printf("==================================================\n");

	/* Leitura dos elementos do vetor "vet" */
	printf("Digite os elementos do vetor (ZERO para encerrar):\n");
	i = -1; 	/* Inicializa contador */
	do
	{
		i++;	/* Incrementa contador */
		scanf("%d", &vet[i]); /* Le elemento a partir do teclado */
	}
	while ((vet[i] != 0) && (i < TAM_MAX));

	tam = i - 1;	/* Definicao do tamanho do vetor */

	/* Impressao do vetor inserido: */
	printf("\n\nImpressao do vetor inserido:\n");
	for (i=0; i <= tam; i++)
	{
		printf("Elemento %d : %d \n", i, vet[i]);
	}

	/* Inversao dos elementos de "vet" */
	for (i=0; i <= tam/2; i++)
	{
		aux        = vet[i];
		vet[i]     = vet[tam-i];
		vet[tam-i] = aux;
	}

	/* Impressao do vetor invertido: */
	printf("\n\nImpressao do vetor invertido:\n");
	for (i=0; i <= tam; i++)
	{
		printf("Elemento %d : %d \n", i, vet[i]);
	}

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	system("PAUSE");

	return 0;
}

