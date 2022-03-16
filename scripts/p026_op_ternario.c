#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	int x;	       /* Numero digitado pelo usuario */

	/* Entrada de dados */
	printf("Este programa analisa se um numero\n");
	printf("inserido pelo usuario eh PAR ou IMPAR.");

	printf("\n\nDigite um numero inteiro: ");
	scanf("%d", &x);
	printf("\n\n");

	/* Verifica o resto da divisao de x por 2, que pode ser: */
	/* 	= 1 (x eh impar) ou */
	/* 	= 0 (x eh par) */
	(x % 2) ? printf("%d eh impar", x) : printf("%d eh par", x);

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar(); /* pause */
	getchar(); /* pause */
	return 0;
}
