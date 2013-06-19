/**
 * Programa que lê n para o número de posições e lê n notas validando n para não dar overflow no vetor
 * calculando a média junto
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	system("clear");

	float notas[30], nota, soma;
	int i = 0, n, count = 0;

	printf("Escreva a quantidade de notas à calcular:\n");
	do {
		scanf("%d", &n);
		if(!((n > 0) && (n <= 30)))
			printf("Limite de 0 à 30 notas, tente novamente:\n");
	} while (!((n > 0) && (n <= 30)));

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
		soma += notas[i];
		if(notas[i] >= 0)
			count++;
	} while (i > 0);
	printf("+--------+-----------+\n");

	printf("\nA média das notas é: %f\n", soma/count);

	return 0;
}