/**
 * Programa que lê dois vetores de 10 elementos e intercala-os
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	float vetor1[10], vetor2[10], vetor_merge[20];
	int i, j;

	printf("Programa que lê dois vetores de 10 posições e soma-os:\n");

	printf("Insira os números no 1º vetor:\n");
	for (i = 0; i < 10; i++)
	{
		printf("Posição %d:\n", i + 1);
		scanf("%f", &vetor1[i]);
	}

	printf("Escreva agora os valores no 2º vetor:\n");
	for (i = 0; i < 10; i++)
	{
		printf("Posição %d:\n", i + 1);
		scanf("%f", &vetor2[i]);
	}

	// Cálculo do vetor_soma
	for (i = 0; i < 20; ++i)
	{
		if((i % 2) == 0) {
			j = i / 2;
			vetor_merge[i] = vetor1[j];
		} else {
			j = ceil(i / 2);
			vetor_merge[i] = vetor2[j];
		}
	}

	// Exibição dos resultados
	printf("+-----+------------+------------+\n");
	printf("| Ind |     V1     |     V2     |\n");
	for (i = 0; i < 10; i++)
	{
		printf("+-----+------------+------------+\n");
		printf("| %3d | %10.5f | %10.5f |\n", i, vetor1[i], vetor2[i]);
	}
	printf("+-----+------------+------------+\n");

	printf("Array intercalado:\n");

	printf("+-----+------------+\n");
	printf("| Ind |    Valor   |\n");
	for (i = 0; i < 20; i++)
	{
		printf("+-----+------------+\n");
		printf("| %3d | %1.5f |\n", i, vetor_merge[i]);
	}
	printf("+-----+------------+\n");

	return 0;
}