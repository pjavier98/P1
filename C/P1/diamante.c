#include <stdio.h>

void diam(int cont)
{
	if (cont == 0)
	{
		return;
	}

	printf("*");

	if (cont > 1)
	{
		printf(".");
	}



	diam(cont - 1);
}

void pontinhos(int pont)
{
	if (pont == 0)
	{
		return;
	}

	else
	{
		printf(".");
	}

	pontinhos(pont - 1);
}

void diamante(int num, int pont, int cont, int temp)
{
	if (cont > num)
	{
		
		if (num == 1)
		{
			return;
		}

		else
		{
			pontinhos(temp);

			diam(num - 1);

			pontinhos(temp);

			printf("\n");

			diamante(num - 1, pont, cont, temp + 1);
		}

		return;
	}

	else
	{
		pontinhos(pont);

		diam(cont);

		pontinhos(pont);

		printf("\n");
	}

	diamante(num, pont - 1, cont + 1, temp);
}

int main()
{
	int numero, pontos, contador;

	scanf("%d", &numero);

	pontos = numero - 1;

	diamante(numero, pontos, 1, 1);
}
