#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	int x;

	/* If sem utilizar chaves */
	x = 2;
	if (x < 2) 
		if (x >= -3)     /* else se associa a este if */
			printf("x estah entre [-3;1]\n");
		else
			printf("x eh maior que 1\n");

	printf("\n\nPausa.\n\n");
	getchar();

	/* If utilizando chaves */
	x = 2;
	if (x < 2)
	{ /* Chaves forcam associacao do else a este if */
		if (x >= -3) 
			printf("x estah entre [-3;1]\n");
	} else
		printf("x eh maior que 1\n");

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
	return 0;
}
