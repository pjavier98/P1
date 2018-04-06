#include <stdio.h>

void split(double val, int quant, int cont, int acum, int temp)
{	
	if (cont == 0)
	{
		if (acum >= 800)
		{
			printf("%d\nSIM", temp);
		}

		else
		{
			printf("%d\nNAO", temp);
		}

		return;
	}

	if (quant > 1)
	{
		temp += (quant - 1);
		acum += val * (quant - 1);
	}
	
	scanf("%lf %d", &val, &quant);

	split(val, quant, cont - 1, acum, temp);
}

int main()
{
	double valor;

	int quantidade;

	scanf("%lf %d", &valor, &quantidade);

	split(valor, quantidade, 6, 0, 0);

	return 0;
}