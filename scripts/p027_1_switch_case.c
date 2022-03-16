#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	int nota;

	/* Entrada de dados */
	printf("Este programa converte uma nota inteira\n");
	printf("inserida pelo usuario em um conceito.");

	/* Ler nota a partir do teclado */
	printf("\n\nDigite a nota: ");
	scanf("%d", &nota);
	printf("\n\nConceito: ");
      
	/* Verifica a correspondencia entre nota inserida e o respectivo conceito */
	switch(nota)
	{
		case 10:
			printf("Louvor\n");
			break;

		case 9:
			printf("Muito bom\n");
			break;

		case 8:
		case 7:
			printf("Bom\n");
			break;

		case 6:
			printf("Regular\n");
			break;

		case 5:
			printf("Insuficiente\n");
			break;

		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Deficiente\n");
		break;

		default:
			printf("Erro de leitura da nota\n");
	}

	/* Pausa na execucao do programa */
	getchar();
	getchar();
	return 0;
}
