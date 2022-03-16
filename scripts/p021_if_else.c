#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/* Declaracao de variaveis */
	float a, b, c;            /* Coeficientes da equacao de 2o. grau */
	float delta;              /* Delta da formula de Baskara */
	float x1, x2;             /* Raizes da equacao */

	/* Atribuicoes (argumentos das funcoes devem ser do tipo float) */
	printf("Insira os coeficientes da equacao de segundo grau:\n");
	scanf("%f %f %f", &a, &b, &c);

	delta = (b * b) - (4 * a * c);

	printf("\n\ndelta = %f\n", delta);  /* escreve na tela o valor de delta */

	/* Extrutura condiconal com "if" */
	if (delta < 0)
		printf("Nao ha solucao real");
	else
	{
		if (delta == 0)
		{
			x1 = - b / (2 * a);
			printf("Duas raizes reais identicas:\n", x1);
		}
		else
		{
			x1 = (- b - sqrt(delta)) / (2 * a);
			x2 = (- b + sqrt(delta)) / (2 * a);
			printf("Duas raizes reais distintas:\n");
			printf("x1 = %f\n", x1);
			printf("x2 = %f\n", x2);
		}
	}

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
	getchar();
	return 0;
}
