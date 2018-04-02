#include <stdio.h>

void comprimento(int n)
{
	if (n == 0)
	{
		return;
	}

	else
	{
		printf("*");
	}
	
	comprimento(n - 1);
}

void altura(int num, int cont)
{
	if (num == 0)
	{
		return;
	}

	else
	{
		comprimento(cont - num);

		printf("*\n");
	}

	altura(num - 1, cont);
}

int main()
{
	int numero, cont;

	scanf("%d", &numero);

	cont = numero;

	altura(numero, cont);
}