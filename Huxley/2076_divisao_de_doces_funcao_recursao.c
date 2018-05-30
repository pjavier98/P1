#include <stdio.h>

int calculo(int a, int cont, int div)
{
    
	if (a < div)
	{
	    return cont;
	}

	if (a % div == 0)
	{
		cont += 1;
	}
    
	calculo(a, cont, div + 1);
}

void doces(int a, int b, int *temp, int resultado, int *maior_num)
{
	if (a > b)
	{
		return;
	}
	else
	{
		resultado = calculo(a, 0, 1);

		if (resultado > *temp)
		{
			*maior_num = a;

			*temp = resultado;
		}
	}
	
	doces(a + 1, b, temp, resultado, maior_num);
}

int main()
{
	int num_a, num_b, temp, resultado, maior_numero;

	int contador, divisor;

	scanf("%d %d", &num_a, &num_b);
    
    doces(num_a, num_b, &temp, resultado, &maior_numero);

    printf("%d %d", maior_numero, temp);
}