#include <stdio.h>
#include <stdlib.h>

void comparar(int num[], int i)
{
	if (i == 100)
	{
		return;
	}

	else
	{
		if (num[i] == num[100])
		{
			printf("%d\n", i);
		}
	}

	comparar(num, i + 1);
}

void ler(int num[], int i)
{
	if (i == 101)
	{
		return;
	}

	scanf("%d", &num[i]);

	ler(num, i + 1);
}

int main()
{
	int *numeros = malloc(101 * sizeof(int));

	ler(numeros, 0);
	
	comparar(numeros, 0);

	return 0;
}