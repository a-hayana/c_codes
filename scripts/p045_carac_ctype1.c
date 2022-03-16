#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>      /* fornece funcoes para manipulacao de caracteres */


int main()
{
	printf("De acordo com \"isalnum\":\n");
	printf("------------------------\n");

	isalnum('A') ? printf("A eh um") : printf("A NAO eh um");
	printf(" digito ou uma letra\n");


	isalnum('8') ? printf("8 eh um") : printf("8 NAO eh um");
	printf(" digito ou uma letra\n");
	isalnum('#') ? printf("# eh um") : printf("# NAO eh um");
	printf(" digito ou uma letra\n");

    getchar();     /* Pausa */

	printf("\n\nDe acordo com \"isalpha\":\n");
	printf("------------------------\n");
	isalpha('A') ? printf("A eh uma") : printf("A NAO eh uma");
	printf(" letra\n");
	isalpha('b') ? printf("b eh uma") : printf("b NAO eh uma");
	printf(" letra\n");
	isalpha('&') ? printf("& eh uma") : printf("& NAO eh uma");
	printf(" letra\n");
	isalpha('4') ? printf("4 eh uma") : printf("4 NAO eh uma");
	printf(" letra\n");

    getchar();     /* Pausa */

	printf("\n\nDe acordo com \"isascii\":\n");
	printf("------------------------\n");
	isascii('&') ? printf("& eh um") : printf("& NAO eh um");
	printf(" caractere ASCII\n");
	isascii(0x228) ? printf("%x eh um", 0x228) : printf("%x NAO eh um", 0x228);
	printf(" caractere ASCII\n");

    getchar();     /* Pausa */

	printf("\n\nDe acordo com \"iscntrl\":\n");
	printf("------------------------\n");
	iscntrl('\n') ? printf("\\n eh um") : printf("\\n NAO eh um");
	printf(" caractere de controle\n");
	iscntrl('$') ? printf("$ eh um") : printf("$ NAO eh um");
	printf(" caractere de controle\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"isgraph\":\n");
	printf("------------------------\n");
	isgraph('Q') ? printf("Q eh um") : printf("Q NAO eh um");
	printf(" caractere imprimivel\n");
	isgraph(' ') ? printf("\' \' eh um") : printf("\' \' NAO eh um");
	printf(" caractere imprimivel\n");
	getchar();     /* Pausa */

	printf("\n\nDe acordo com \"isprint\":\n");
	printf("------------------------\n");
	isprint('$') ? printf("$ eh um") : printf("$ NAO eh um");
	printf(" caractere imprimivel\n");
	isprint(' ') ? printf("\' \' eh um") : printf("\' \' NAO eh um");
	printf(" caractere imprimivel\n");

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
    getchar();
}
