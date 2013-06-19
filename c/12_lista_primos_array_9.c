/**
 * Programa que lê um vetor de 9 elementos numéricos inteiros e mostra os números primos da lista
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int lista[9], i, j, div_count;

	printf("Programa que lê um array de 9 elementos inteiros e imprime os primos da lista com seus respectivos índices\n");

	for (i = 0; i < 9; i++)
	{
		printf("Posição %d:\n", i);
		scanf("%d", &lista[i]);
	}

	printf("+--------+--------+\n");
	printf("| índice |  valor |\n");
	for (i = 0; i < 9; i++)
	{
		printf("+--------+--------+\n");
		printf("| %6d | %6d |\n", i, lista[i]);
	}
	printf("+--------+--------+\n\n");

	printf("Números primos:\n");
	printf("+--------+--------+\n");
	printf("| índice |  primo |\n");
	for (i = 0; i < 9; i++)
	{
		div_count = 0;
		for (j = lista[i]; j > 0; j--)
		{
			if(lista[i] % j == 0)
				div_count++;
		}

		if(div_count == 2) {
			printf("+--------+--------+\n");
			printf("| %6d | %6d |\n", i, lista[i]);
		}
	}
	printf("+--------+--------+\n\n");

	return 0;
}