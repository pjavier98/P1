#include <stdio.h>
#include <math.h>

void serie(int num, int cont, double *resultado, int temp)
{
	if (num == 1)
	{
		return;
	}

	else
	{
		if (cont % 2 != 0)
		{
			*resultado += pow(2, cont) / (temp);

			temp += 3;
		}
		
		else
		{
			*resultado += (cont + 1) / pow(2, cont);
		}
	}
	
	serie(num - 1, cont + 1, resultado, temp);
}

int main()
{
	int numero;

	double resultado;

	scanf("%d", &numero);

	if (numero == 1)
	{
		printf("1.0");
	}

	if (numero == 0)
	{
		printf("0.0");
	}
	
	else
	{
		serie(numero, 1, &resultado, 3);

		printf("%.2lf", resultado + 1);
	}
	

}