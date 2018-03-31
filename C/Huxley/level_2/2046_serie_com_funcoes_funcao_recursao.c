#include <stdio.h>
#include <math.h>

int primo(int num, int div, int temp)
{
	if (div == 1)
	{
		return temp;
	}

	if (num % div == 0)
	{
		temp += 1;
	}

	primo(num, div - 1, temp);
}

int prox_primo(int num, int temp)
{
	int div = floor(sqrt(num));
	
	temp = primo(num, div, 0);

	if (temp > 0)
	{
		prox_primo(num + 1, 0);
	}
	
	else
	{
		return num;
	}
}


double fatorial(int fator)
{
	if(fator <= 1.0)
	{
		return 1;
	}
	
	return fator * fatorial(fator - 1);
}


void ler(int num, int cont, double *resultado, int temp)
{
	printf("%d!/%d", cont, prox_primo(cont, 0));

	*resultado += fatorial(cont) / prox_primo(cont, 0);
	
	if (cont == num)
	{
		return;
	}
	
	printf(" + ");
	
	ler(num, cont + 1, resultado, temp);
}

int main()
{
	int numero;

	double resultado;

	scanf("%d", &numero);

	if (numero != 0)
	{
		ler(numero, 1, &resultado, 0); // 0 - contador
	
		printf("\n%.2lf", resultado);
	}

	else
	{
		printf("%.2lf", resultado);
	}

	return 0;
}