#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 15

int main()
{
	/* Declaracao de variaveis */
	int mat[TAM_MAX][TAM_MAX]; 	/* Matriz quadrada */
	int n;	       					/* Dimensao da matriz quadrada */
	int i, j;			       		/* Contadores */

	printf("========================================================\n");
	printf("Este programa preenche uma matriz quadrada de dimensao N\n");
	printf("com \"1\" nos termos abaixo da diagonal principal, e com\n");
	printf("\"0\" nos demais termos.\n");
	printf("========================================================\n\n");

	/* Leitura da dimensao da matriz quadrada */
	printf("Digite a dimensao N (< %d) da matriz:\n", TAM_MAX);
	while ((n > TAM_MAX) || (n <= 0))
	{
		scanf("%d", &n);
		if ((n > TAM_MAX) || (n <= 0))
			printf("Valor invalido. Digite outro:\n");
	}

	/* Determinacao dos elementos da matriz */
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (i > j)               /* Verifica se termo estah abaixo da diagonal principal */
				mat[i][j] = -1;
			else
				mat[i][j] = 0;
		}
	}

	/* Impressao da matriz na tela: */
	printf("\n\nMatriz quadrada:\n");
	for (i = 0 ; i < n ; i++)
	{
		/* Percorre cada coluna da matriz */
		for (j = 0 ; j < n ; j++)
		{
			printf("%3d  ", mat[i][j]);
		}
		/* Muda de linha na tela */
		printf("\n");
	}

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
	getchar();
	return 0;
}
