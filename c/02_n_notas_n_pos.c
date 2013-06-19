/**
 * Programa que lê a quantidade de notas, lê estas notas e imprime
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	system("clear");

	float notas[30], nota;
	int i = 0, n;

	printf("Escreva a quantidade de notas à calcular:\n");
	scanf("%d", &n);

	printf("Escreva as notas:");

	while (i < n) {
		printf("Escreva a nota nº %d\n", i + 1);
		scanf("%f", &notas[i]);
		if(notas[i] < 0)
			break;
		i++;
	}

	printf("+--------+-----------+\n");
	printf("| Índice |    NOTA   |\n");
	do {
		--i;
		printf("+--------+-----------+\n");
		printf("| %6d | %9.4f |\n", i + 1, notas[i]);
	} while (i > 0);
	printf("+--------+-----------+\n");

	return 0;
}