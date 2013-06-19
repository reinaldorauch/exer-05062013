/**
 * Programa que monta um vetor com os primeiros números primos
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int primos[100], count = 0, z = 0, div_count;

	while(count < 100) {
		div_count = 0;
		for (int i = z; i > 0; i--)
		{
			if(z % i == 0)
				div_count++;
		}

		if(div_count == 2) {
			primos[count] = z;
			count++;
		}
		z++;
	}

	printf("Números primos:\n");
	printf("+--------+--------+\n");
	printf("| índice |  primo |\n");
	for (int i = 0; i < 100; i++)
	{
		printf("+--------+--------+\n");
		printf("| %6d | %6d |\n", i, primos[i]);
	}
	printf("+--------+--------+\n");

	return 0;
}