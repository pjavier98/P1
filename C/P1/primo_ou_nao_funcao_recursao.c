#include <stdio.h>

int primo(int num, int div, int cont)
{
	if (div == num - 1)
	{
		return cont;
	}

	if(num % div == 0 && num != 2)
	{
		cont++;
	}

	primo(num, div + 1, cont);

}

int main()
{
	int numero, divisor, contador;

	int resultado = 0;

	contador = 0;

	divisor = 2;

	scanf("%d", &numero);

	if (numero > 2)
	{
		resultado = primo(numero, divisor, contador);
	}

	if (numero == 0 || numero == 1)
	{
		printf("Nao é Primo\n");
	}

	else if (resultado > 0)
	{
		printf("Nao é Primo\n");
	}
	else
	{
		printf("Primo\n");
	}
	return 0;
}