/**
 * Programa que lê e escreve 10 notas, vetor com 30 posições
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	system("clear");

	float notas[30], nota;
	int i = 0;

	while (i < 10) {
		printf("Escreva a nota nº %d\n", i + 1);
		scanf("%f", &notas[i]);
		i++;
	}

	do {
		--i;
		printf("Nota %d: %f\n", i + 1, notas[i]);
	} while (i > 0);


	return 0;
}