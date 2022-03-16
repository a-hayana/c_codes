#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>      /* fornece funcoes para manipulacao de caracteres */


int main()
{
	printf("De acordo com \"islower\":\n");
	printf("------------------------\n");
	islower('p') ? printf("p eh um") : printf("p NAO eh um");
	printf(" caractere minusculo\n");
	islower('P') ? printf("P eh um") : printf("P NAO eh um");
	printf(" caractere minusculo\n");
	islower('5') ? printf("5 eh um") : printf("5 NAO eh um");
	printf(" caractere minusculo\n");
	islower('!') ? printf("! eh um") : printf("! NAO eh um");
	printf(" caractere minusculo\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"isupper\":\n");
	printf("------------------------\n");
	isupper('D') ? printf("D eh um") : printf("D NAO eh um");
	printf(" caractere maiusculo\n");
	isupper('d') ? printf("d eh um") : printf("d NAO eh um");
	printf(" caractere maiusculo\n");
	isupper('8') ? printf("8 eh um") : printf("8 NAO eh um");
	printf(" caractere maiusculo\n");
	isupper('$') ? printf("$ eh um") : printf("$ NAO eh um");
	printf(" caractere maiusculo\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"isspace\":\n");
	printf("------------------------\n");
	isspace('\n') ? printf("\\n eh um") : printf("\\n NAO eh um");
	printf(" caractere espaco em branco\n");
	isspace('\t') ? printf("\\t eh um") : printf("\\t NAO eh um");
	printf(" caractere espaco em branco\n");
	isspace('%') ? printf("%% eh um") : printf("%% NAO eh um");
	printf(" caractere espaco em branco\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"ispunct\":\n");
	printf("------------------------\n");
	ispunct(';') ? printf("; eh um") : printf("; NAO eh um");
	printf(" caractere de pontuacao\n");
	ispunct('Y') ? printf("Y eh um") : printf("Y NAO eh um");
	printf(" caractere de pontuacao\n");
	ispunct('#') ? printf("# eh um") : printf("# NAO eh um");
	printf(" caractere de pontuacao\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"isdigit\":\n");
	printf("------------------------\n");
	isdigit('8') ? printf("8 eh um") : printf("8 NAO eh um");
	printf(" digito\n");
	isdigit('#') ? printf("# eh um") : printf("# NAO eh um");
	printf(" digito\n");
	getchar();     /* Pausa */


	printf("\n\nDe acordo com \"isxdigit\":\n");
	printf("-------------------------\n");
	isxdigit('F') ? printf("F eh um") : printf("F NAO eh um");
	printf(" digito hexadecimal\n");
	isxdigit('J') ? printf("J eh um") : printf("J NAO eh um");
	printf(" digito hexadecimal\n");
	isxdigit('7') ? printf("7 eh um") : printf("7 NAO eh um");
	printf(" digito hexadecimal\n");
	isxdigit('$') ? printf("$ eh um") : printf("$ NAO eh um");
	printf(" digito hexadecimal\n");
	isxdigit('f') ? printf("f eh um") : printf("f NAO eh um");
	printf(" digito hexadecimal\n");

	/* Pausa na execucao do programa */
	printf("\n\n\n\n");
	getchar();
}
