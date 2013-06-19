/**
 * Programa que lê n para o número de posições e lê n notas validando n para não dar overflow no vetor
 * dizendo qual é o maior e o menor dizendo seus respectivos índices no vetor
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	system("clear");

	float notas[30], nota, maior, menor;
	int i = 0, n, ind_men = 0, ind_mai = 0;

	printf("Escreva a quantidade de notas à calcular:\n");
	do {
		scanf("%d", &n);
		if(!((n > 0) && (n <= 30)))
			printf("Limite de 0 à 30 notas, tente novamente:\n");
	} while (!((n > 0) && (n <= 30)));

	printf("Escreva as notas:\n");

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

		if(i + 1 ==n) {
			menor = maior = notas[i];
			ind_men = ind_mai = i;
		} else {
			if(notas[i] > maior){
				maior = notas[i];
				ind_mai = i + 1;
			}
			if(notas[i] < menor) {
				menor = notas[i];
				ind_men = i + 1;
			}
		}

		printf("+--------+-----------+\n");
		printf("| %6d | %9.4f |\n", i + 1, notas[i]);
	} while (i > 0);
	printf("+--------+-----------+\n");

	printf("O maior é: %f, com índice %d, e o menor é: %f, com índice %d\n", maior, ind_mai, menor, ind_men);

	return 0;
}