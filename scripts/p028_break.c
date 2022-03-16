#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	int nota;

	/* Entrada de dados */
	printf("Este programa converte uma nota\n");
	printf("inserida pelo usuario em um conceito.");

	/* Ler nota a partir do teclado */
	printf("\n\nDigite a nota: ");
	scanf("%d", &nota);
	printf("\n\nConceito: ");
      
  /* Verifica a correspondencia entre nota inserida e o respectivo conceito       */
  switch(nota)
  {	
      case 10:
         printf("Louvor\n");

		case 9:
         printf("Muito bom\n");

		case 8:
      case 7:
         printf("Bom\n");

		case 6:
         printf("Regular\n");

		case 5:
         printf("Insuficiente\n");
         
      case 4:
      case 3:
      case 2:
      case 1:
      case 0:
         printf("Deficiente\n");

      default:
         printf("Erro de leitura da nota");
  }
     

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
	getchar();
	return 0;
}

