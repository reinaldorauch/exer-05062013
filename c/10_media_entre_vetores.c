/**
 * Programa que lê 10 notas da primeira prova de 10 alunos e 10 notas da segunda prova destes mesmos 10 alunos
 * calculando a média entre as provas
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	float prova1[10], prova2[10], vetor_media[10];
	int i;

	printf("Programa que lê as notas de 10 alunos em duas provas e tira a média:\n");

	printf("Insira as notas da 1º prova:\n");
	for (i = 0; i < 10; i++)
	{
		printf("Aluno %d:\n", i + 1);
		scanf("%f", &prova1[i]);
	}

	printf("Escreva agora as notas da 2º prova:\n");
	for (i = 0; i < 10; i++)
	{
		printf("Aluno %d:\n", i + 1);
		scanf("%f", &prova2[i]);
	}

	// Cálculo do vetor_media
	for (i = 0; i < 10; ++i)
	{
		vetor_media[i] = (prova1[i] + prova2[i]) / 2;
	}

	// Exibição dos resultados
	printf("+-----+------------+------------+------------+\n");
	printf("| Alu |   Prova 1  |   Prova 2  |    Média   |\n");
	for (i = 0; i < 10; i++)
	{
		printf("+-----+------------+------------+------------+\n");
		printf("| %3d | %10.5f | %10.5f | %10.5f |\n", i, prova1[i], prova2[i], vetor_media[i]);
	}
	printf("+-----+------------+------------+------------+\n");

	return 0;
}