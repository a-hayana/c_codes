#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	int soma = 0;         /* Soma das idades */
	int quantidade = 0;   /* Quantidade de idades inseridas */
	int idade = 0;        /* Idade digitada */
	float media;          /* Media das idades digitadas */

	while (idade != -1)
	{
		printf("\nDigite a idade da pessoa no. %d (-1 para encerrar):", quantidade+1);
		scanf("%d", &idade);
		if (idade >= 0)
		{
			soma = soma + idade;
			quantidade = quantidade + 1;
		}
	}

	/* Faz o calculo da media de idade */
	if (quantidade > 0)
	{
		media = (float) soma / quantidade;
		printf("Idade media das %d pessoas = %5.2f\n", quantidade, media);
	}
	else 
		printf("Nenhum dado foi informado.\n"); 


	/* Pausa na execucao do programa */
	getchar();
	getchar();
	return 0;
}

