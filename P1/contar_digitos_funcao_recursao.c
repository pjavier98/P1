#include <stdio.h>

int digitos(int num, int cont)
{
	if(num < 10)
	{
		return 1 + cont;
	}

	digitos(num / 10, cont + 1);
}

int main()
{
	int numero, contador;

	contador = 0;

	scanf("%d", &numero);

	printf("%d\n", digitos(numero, contador));

	return 0;
}