#include <stdio.h>

void calcular(double array[10], int i, double media, double menor, int cont)
{
	if (i == 10)
	{
		printf("%.2lf\n", menor);
		
		printf("%.2lf\n", media / cont);
		
		return;
	}

	scanf("%lf", &array[i]);
    
    if (array[i] < 0)
    {
	    media += array[i];
	    cont += 1;
    }
    
	if (menor > array[i])
	{
		menor = array[i];
	}

	calcular(array, i + 1, media, menor, cont);
}

int main()
{
	double array[10];

	calcular(array, 0, 0, 0, 0);

	return 0;
}