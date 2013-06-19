/**
 * Programa para o armazenamento e definição dos valores de temperatura do ano
 */
#include <stdio.h>
#include <string.h>

int main()
{
	float temps[12], sum = 0, min, max;
	int count = 0, ind_min, ind_max;
	char ano_meses[12][15];

	strcpy(ano_meses[0], "Janeiro");
	strcpy(ano_meses[1], "Fevereiro");
	strcpy(ano_meses[2], "Março");
	strcpy(ano_meses[3], "Abril");
	strcpy(ano_meses[4], "Maio");
	strcpy(ano_meses[5], "Junho");
	strcpy(ano_meses[6], "Julho");
	strcpy(ano_meses[7], "Agosto");
	strcpy(ano_meses[8], "Setembro");
	strcpy(ano_meses[9], "Outubro");
	strcpy(ano_meses[10], "Novembro");
	strcpy(ano_meses[11], "Dezembro");

	printf("Programa para o armazenamento e definição dos valores de temperatura do ano\n");

	for (int i = 0; i < 12; i++)
	{
		printf("Escreva a temperatura média no mês de %s:\n", ano_meses[i]);
		scanf("%f", &temps[i]);
	}

	for (int j = 0; j < 12; j++) {
		sum += temps[j];
		count++;

		if(j == 0) {
			min = max = temps[j];
			ind_min = ind_max = j;
		} else {
			if(temps[j] > max) {
				max = temps[j];
				ind_max = j;
			}
			if(temps[j] < min) {
				min = temps[j];
				ind_min = j;
			}
		}
	}

	printf("A maior temperatura média ocorreu em %s e era de %f\n", ano_meses[ind_max], max);
	printf("A menor temperatura média ocorreu em %s e era de %f\n", ano_meses[ind_min], min);

	printf("\nA média anual é de: %f\n", sum/count);

	return 0;
}