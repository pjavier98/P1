#include <stdio.h>

int triangular(int num, int cont)
{
	if (cont > num / 10)
	{
		return 0;
	}

	else
	{
		if (cont * (cont + 1) * (cont + 2) == num)
		{
			return 1;
		}
	}

	triangular(num, cont + 1);
}

int main()
{
	int numero, temporal, contador;

	scanf("%d", &numero);

	contador = 0;

	temporal = triangular(numero, contador);

	if (temporal > 0)
	{
		printf("True\n");
	}

	else
	{
		printf("False\n");
	}

	return 0;
}