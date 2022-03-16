#include <stdio.h>
#include <stdlib.h>

#define LIMITE 16        /* Tamanho das strings */

int main()
{
	/* Declaracao de constantes e variaveis */
	char asteriscos[LIMITE]; /* String de '*' */
	char cifroes[LIMITE];    /* String de '$' */
	char arrobas[LIMITE];    /* String de '@' */
	int i;                   /* Contador */

	printf("=========================================================\n");
	printf("Este programa ilustra os cuidados que devem ser tomados.\n");
	printf("ao se trabalhar com os limites de um vetor.\n");
	printf("=========================================================\n");
	printf("\n\n");

	/* Imprime os enderecos de memoria onde estao armazenadas as strings declaradas */
	/* Note que nao sao impressos os ELEMENTOS das strings, mas sim seus ENDERECOS */
	printf("Endereco do inicio de \'arrobas\'   : %#x \n", arrobas);
	printf("Endereco do inicio de \'cifroes\'   : %#x \n", cifroes);
	printf("Endereco do inicio de \'asteriscos\': %#x \n", asteriscos);
	printf("Endereco de \'i\': %#x \n", &i);
	printf("\n\n");
	getchar();


	/* Imprime os enderecos de memoria de cada ELEMENTO da string,
       mostrando que sao armazenados de forma CONTIGUA na memoria */
	for (i = 0; i < LIMITE; i++)
	{
	    printf("Endereco de arrobas[%02d]: %#x \n", i, &arrobas[i]);
	}
	printf("\n\n");
	getchar();

	for (i = 0; i < LIMITE; i++)
	{
	    printf("Endereco de cifroes[%02d]: %#x \n", i, &cifroes[i]);
	}
	printf("\n\n");
	getchar();


	for (i = 0; i < LIMITE; i++)
	{
	    printf("Endereco de asteriscos[%02d]: %#x \n", i, &asteriscos[i]);
	}
	printf("\n\n");
	getchar();

	/* Atribuicao de valores às strings declaradas */
	for (i = 0 ; i < LIMITE; i++)
	{
		asteriscos[i] = '*';
		cifroes[i]    = '$';
		arrobas[i]    = '@';
	}

	/* Imprime na tela o valor dos elementos das strings,  */
	/* atribuidos no laco "for" anterior */
	printf("Strings originais:\n");
	printf("-------------------------\n");

	printf("Asteriscos: ");
	for (i = 0; i < LIMITE; i++)
		printf("%c", asteriscos[i]);

	printf ("\n");

	printf("Cifroes   : ");
	for (i = 0; i < LIMITE; i++) 
		printf("%c", cifroes[i]);

	printf ("\n");

	printf("Arrobas   : ");
	for (i = 0; i < LIMITE; i++) 
		printf("%c", arrobas[i]);

	printf("\n\n\n");
	getchar();

	/* Atribui valores aos elementos da string 'arrobas'   */
	/* nao respeitandos seus limites  */
	for (i = 0 ; i < 43; i++)
		arrobas[i] = '@';

	/* Impressao dos elementos das strings, apos atribuicao */
	/* de valores que nao respeitou os limites das strings */
	printf("Strings apos alteracao:\n");
	printf("-------------------------\n");

	printf("Asteriscos: ");
	for (i = 0; i < LIMITE; i++) 
		printf("%c", asteriscos[i]);

	printf ("\n");

	printf("Cifroes   : ");
	for (i = 0; i < LIMITE; i++) 
		printf("%c", cifroes[i]);

	printf ("\n");

	printf("Arrobas   : ");
	for (i = 0; i < LIMITE; i++) 
		printf("%c", arrobas[i]);

	printf("\n");

	/* Pausa na execucao do programa */
	printf("\n");
	getchar();
	return 0;
}
