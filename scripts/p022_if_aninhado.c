#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* Declaracao de variaveis */
	int pri, seg, ter;

	/* Leitura dos valores das variaveis */
	printf("=================================\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &pri);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &seg);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &ter);
	printf("=================================\n\n\n");

	/* Verifica se os tres numeros sao iguais entre si */
	if ((pri != seg) && (seg != ter) && (pri != ter))
	{
		if (pri > seg)
		{
			if (pri > ter) printf("Maior: %d", pri);
			else printf("Maior: %d", ter);   /* ter > pri > seg */
		}
		else
		{
			if (seg > ter) printf("Maior: %d", seg);
			else printf("Maior: %d", ter);
		}

	}
	else
	{ /* Testes para o caso de existir pelo menos dois numeros iguais */
		if ((pri == seg) && (seg == ter)) printf("Os tres numeros sao iguais!");
		else
		{
			if (pri == seg)
			{
				if (pri > ter) printf("Maior: %d", pri);
				else printf("Maior: %d", ter);
			}
			else
			{
				if (ter == seg)
				{
					if (ter > pri) printf("Maior: %d", ter);
					else printf("Maior: %d", pri);
				}
				else
				{  /* Neste ponto, jah que pri != seg e ter != seg, */
					/* a unica opcao eh que pri == ter */

					if (pri > seg) printf("Maior: %d", pri);
					else printf("Maior: %d", seg);
				}
			}
		}
	}


	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
	getchar();
	return 0;
}
