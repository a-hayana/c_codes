#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	float ladoA, ladoB, ladoC;  /* Lados do triangulo */

	/* Entrada de dados */
	printf("Este programa analisa tres numeros inseridos pelo usuario\n");
	printf("e verifica a qual tipo de triangulo eles correspondem.");

	printf("\n\nDigite tres numeros reais positivos:\n");
	printf("Lado A: ");
	scanf("%f", &ladoA);
	printf("Lado B: ");
	scanf("%f", &ladoB);
	printf("Lado C: ");
	scanf("%f", &ladoC);

	/* Verifica se os numeros inseridos formam um triangulo              */
	if ( (ladoA < ladoB+ladoC) && (ladoB < ladoA+ladoC) && (ladoC < ladoA+ladoB))
    {
		if ((ladoA == ladoB) && (ladoA == ladoC))
			printf ("\n\n\nTriangulo eh equilatero.\n");
		else if (ladoA==ladoB || ladoA==ladoC || ladoB==ladoC) 
			printf ("\n\n\nTriangulo eh isosceles.\n");
		else if (ladoA!=ladoB && ladoB!=ladoC ) 
			printf ("\n\n\nTriangulo eh escaleno.\n");
	} else
		printf("\n\n\nOs valores informados nao constituem um triangulo.\n");

    /* Impressao dos valores digitados dos lados do triagulo  */
	printf("A: %f\n", ladoA);
	printf("B: %f\n", ladoB);
	printf("C: %f\n", ladoC);

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar(); /* pause */
	getchar(); /* pause */
	
	return 0;
}

