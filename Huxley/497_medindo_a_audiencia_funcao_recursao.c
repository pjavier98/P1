#include <stdio.h>

void ler(double vetor[5], int i, double media)
{
	if (i == 5)
	{
		printf("%.2lf\n", media / 5);

		if (vetor[0] > vetor[1] && vetor[0] > vetor[2] && vetor[0] > vetor[4] || vetor[3] > vetor[1] && vetor[3] > vetor[2] && vetor[3] > vetor[4])
		{
			printf("NOVELA\n");
		}

		else if (vetor[1] > vetor[0] && vetor[1] > vetor[2] && vetor[1] > vetor[3] || vetor[4] > vetor[0] && vetor[4] > vetor[2] && vetor[4] > vetor[3])
		{
			printf("FILME\n");
		}

		else
		{
			printf("FUTEBOL\n");
		}

		return;
	}

	scanf("%lf", &vetor[i]);

	media += vetor[i];

	ler(vetor, i + 1, media);
}

int main()
{
	double vetor[5];

	ler(vetor, 0, 0);

	return 0;
}