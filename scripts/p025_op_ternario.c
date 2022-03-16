#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	float nota1, nota2;	/* Notas parciais */
	float trab;		    /* Nota do trabalho */
	float media;		/* Media final */

	/* Entrada de dados */
	printf("Este programa calcula a media de um aluno.");

	printf("\n\nDigite as notas do aluno:\n");
	printf("Nota 1: ");
	scanf("%f", &nota1);
	printf("Nota 2: ");
	scanf("%f", &nota2);
	printf("Nota do trabalho: ");
	scanf("%f", &trab);
	printf("\n\n");

	/* Quando a nota do trabalho < 5, ela nao entra no calculo da media */
	media = (trab > 5) ? (nota1 + nota2 + trab)/3 : (nota1 + nota2)/2;

	printf("A media final do aluno eh %.2f", media);

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar(); /* pause */
	getchar(); /* pause */
	return 0;
}
