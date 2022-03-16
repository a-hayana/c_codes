#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 30

int main() {
	/* Declaracao de variaveis */
	int k;	          /* Constante procurada */
	int vet[TAM_MAX]; /* Vetor a ser inserido */
	int i;		      /* Contador */
	int presente;	  /* Flag de verificacao */
	int n;		      /* Tamanho do vetor */

	printf("=============================================================\n");
	printf("Este programa verifica se um elemento fornecido pelo usuario\n");
	printf("estah contido em um vetor tambem fornecido.\n");
	printf("=============================================================\n");

	/* Ler elemento (k) a ser procurado */
	printf("Digite um numero inteiro k a ser procurado: ");
	scanf("%d", &k);

	/* Ler tamanho (n) do vetor */
	printf("Digite o tamanho N do vetor (N < %d): ", TAM_MAX);
	scanf("%d", &n);
	printf("\n");

	/* Ler elementos do vetor "vet" */
	for(i = 0; i < n; i++)
	{
		printf("Elemento da posicao %d do vetor: ", i);
		scanf("%d", &vet[i]);
	}

	/* Procura do elemento "k" entre os elementos de "vet" */
	presente = 0;	/* Inicia o contador de ausencia do elemento no vetor */
	i = 0;          /* Zera o contador */
	while ((presente == 0) && (i < n))
	{
		if (vet[i] == k) 
		{
			printf("\n\nElemento %d estah na posicao %d do vetor inserido.\n", k, i);
			presente = 1;     // Indica que encontrou o elemento
		}
		i++;           /* Incrementa contador */
	}

	/* Verifica se o elemento "k" nao foi encontrado nenhuma vez no laco while.
       Nesse caso, "presente" serah igual a zero, caso contrário, será 1 */
	if (presente == 0) 
		printf("\n\nElemento %d nao pertence ao vetor inserido.\n", k);

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");

    system("PAUSE");
	return 0;
}
