#include <stdio.h>
#include <stdlib.h>

void media(int quantidade, double notas[], int i, double soma_notas)
{
	if (quantidade == i)
	{
		double media = soma_notas / quantidade;

		printf("%.2lf\n", media);

		return;
	}

	scanf("%lf", &notas[i]);

	soma_notas += notas[i];

	media(quantidade, notas, i + 1, soma_notas);
}
int main()
{
	int quantidade;

	scanf("%d", &quantidade);

	double *notas = malloc(quantidade * sizeof(double));

	media(quantidade, notas, 0, 0);
}