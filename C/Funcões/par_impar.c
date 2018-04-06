#include <stdio.h>

void par_impar(int num)
{
	if (num % 2 == 0)
	{
		printf("Par\n");
	}

	else
	{
		printf("Impar\n");
	}
}

int main()
{
	int numero;

	scanf("%d", &numero);

	par_impar(numero);

	return 0;
}