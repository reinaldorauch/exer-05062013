/**
 * Programa que calcula e armazena num vetor os números primos que são menor que 100
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int divs, n_primos = 0;
	printf("Programa que calcula e armazena num vetor os números primos menores que 100\n");

	for (int i = 0; i < 100; i++)
	{
		divs = 0;
		for (int j = 1; j <= i; j++)
		{
			if(i % j == 0)
				divs++;
		}

		if(divs == 2)
			n_primos++;
	}

	int primos[n_primos];

	for (int i = 0; i < 100; i++)
	{
		divs = 0;
		for (int j = 1; j <= i; j++)
		{
			if((i % j) == 0)
				divs++;
		}

		if(divs == 2)
			primos[--n_primos] = i;
	}

	printf("+--------+--------+\n");
	printf("| índice |   num  |\n");
	while(primos[n_primos]) {
		printf("+--------+--------+\n");
		printf("| %6d | %6d |\n", n_primos, primos[n_primos]);
		n_primos++;
	}
	printf("+--------+--------+\n\n");

	printf("São %d números primos menores que 100\n", n_primos++);

	return 0;
}