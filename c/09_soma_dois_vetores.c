/**
 * Programa que lê dois vetores de 10 elementos e soma-os par a par, resultando em um outro vetor
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	float vetor1[10], vetor2[10], vetor_soma[10];
	int i;

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
	for (i = 0; i < 10; ++i)
	{
		vetor_soma[i] = vetor1[i] + vetor2[i];
	}

	// Exibição dos resultados
	printf("+-----+------------+------------+------------+\n");
	printf("| Ind |     V1     |     V2     |     RES    |\n");
	for (i = 0; i < 10; i++)
	{
		printf("+-----+------------+------------+------------+\n");
		printf("| %3d | %10.5f | %10.5f | %10.5f |\n", i, vetor1[i], vetor2[i], vetor_soma[i]);
	}
	printf("+-----+------------+------------+------------+\n");

	return 0;
}