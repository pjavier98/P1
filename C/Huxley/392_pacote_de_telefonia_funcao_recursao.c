	#include <stdio.h>

void ler(int numeros, int minutos, int ligacoes, int cont, int temp)
{
	scanf("%d", &numeros);

	if (numeros == 0)
	{
	    if (minutos > 40 && ligacoes > 10)
	    {
	        printf("%.2lf", 10 + (cont + temp) * 0.2);
	    }
		else if (minutos > 40)
		{
			cont = minutos - 40;
			
			printf("%.2lf\n", 10 + (cont * 0.2));
		}
		
		else if (ligacoes > 10)
		{
			printf("%.2lf\n", 10 + (temp * 0.2));
		}

		else
		{
			printf("10");
		}

		return;
	}

	minutos += numeros;

	ligacoes += 1;

	if (ligacoes > 10)
	{
		temp += numeros;
	}

	ler(numeros, minutos, ligacoes, cont, temp);
}

int main()
{
	int numeros;

	ler(numeros, 0, 0, 0, 0);

	return 0;
}