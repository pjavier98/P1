#include <stdio.h>
#include <math.h>

void primo(int num, int div, int temp)
{
	if (div == 1)
	{
		if (temp > 0)
		{
			printf("Nao primo\n");
		}

		else
		{
			printf("Primo\n");
		}

		return;
	}

	if (num % div == 0)
	{
		temp += 1;
	}

	primo(num, div - 1, temp);
}

int main() /* 0 e 1 nao sao primos*/
{
	int numero;

	scanf("%d", &numero);

	int divisor = floor(sqrt(numero));

	if (numero == 0 || numero == 1)
	{
		printf("Nao primo\n");
	}

	else
	{
		primo(numero, divisor, 0);
	}
	
	return 0;
}