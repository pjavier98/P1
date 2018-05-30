#include <stdio.h>

void ganha(double num, double temp, int cont, int ac)
{
	if (cont == 0)
	{
		if (ac == 5)
		{
			printf("Ganha brinquedo");
		}

		else
		{
			printf("Sem brinquedo");
		}
		
		return;
	}

	scanf("%lf", &num);
    
	if (temp < num)
	{
		ac += 1;
	}

	ganha(num, temp = num, cont - 1, ac);
}
int main()
{
	double numero;

	int acum;

	scanf("%lf", &numero);

	double temp = numero;

	ganha(numero, temp, 5, acum);

	return 0;
}