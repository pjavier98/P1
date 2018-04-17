#include <stdio.h>
#include <stdlib.h>

void comparacao(int numeros[], int i, int cont)
{
	if (i == 10)
	{
		printf("O numero %d apareceu %d vezes\n", numeros[9], cont);
		return;
	}

	if (numeros[9] == numeros[i])
	{
		cont += 1;
	}

	comparacao(numeros, i + 1, cont);

}

void leitura(int numeros[], int i)
{
	if (i == 10)
	{
		return;
	}

	else
	{
		scanf("%d", &numeros[i]);
	}

	leitura(numeros, i + 1);
}

int main()
{
	int *numeros = malloc(10 * sizeof(int));

	leitura(numeros, 0);

	comparacao(numeros, 0, 0);

	return 0;
}