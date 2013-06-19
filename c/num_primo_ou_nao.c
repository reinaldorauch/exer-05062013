/**
 * Programa para verificar se um número é primo ou não
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num, divisores = 0;

	printf("Programa para verificar se um número é primo ou não\n");

	printf("Digite um número:\n");
	scanf("%d", &num);

	do
	{
		system("clear");

		divisores = 0;
		for (int i = 1; i <= num; i++)
		{
			if((num % i) == 0)
				divisores++;
		}

		if(num == 1)
			printf("1 não é primo por só ser divisível por ele mesmo\n");
		else if(divisores == 2)
			printf("%d é primo.\n", num);
		else
			printf("%d não é primo, pois tem %d divisores\n", num, divisores);

		printf("Quer continuar? (0 = Não/outro número = vai ser testado)\n");
		scanf("%d", &num);
	} while (num != 0);

	return 0;
}