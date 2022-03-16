#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	/* Declaracao de variaveis */
	float num, raiz;

	printf("Digite um numero real:\n");
	scanf("%f", &num);     

	if (num >= 0)
	{
		raiz = sqrt(num);
    	printf("A raiz quadrada de %f eh %f\n", num, raiz);
    }

	printf("Fim");

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar(); /* pause */
	getchar(); /* pause */
	return 0;
}

