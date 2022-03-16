#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Declaracao de variaveis */
	char tecla;	/* Codigo ASCII da tecla digitada pelo usuario */

	printf("ERRO FATAL!! Deseja continuar? (S/N)");
	do
	{
		tecla = getchar();
	}
	while( (tecla != 'S') && (tecla != 's') && (tecla != 'n') && (tecla != 'N'));
	
	/* Pausa na execucao do programa */
	printf("\n\n");
	printf("FIM!");
	getchar();
	getchar();
	return 0;
}

