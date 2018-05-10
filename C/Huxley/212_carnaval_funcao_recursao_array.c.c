#include <stdio.h>
#include <stdlib.h>

void imprimir(double num[5])
{
    printf("%.1lf ", num[1] + num[2] + num[3]);
    
    return;
}

void troca(double *a, double *b)
{
	double temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void comparar(double num[5], int i, int j)
{
	if (5 == i)
	{
	    return;
	}

	if (j < 5)
	{
		if (num[i] > num[j])
		{
			troca(&num[i], &num[j]);
		}

		comparar(num, i, j + 1);
		
		return;
	}

	
	comparar(num, i + 1, j = i + 1);

}

void ler(double numeros[], int i)
{
	if (5 == i)
	{
		return;
	}

	else
	{
		scanf("%lf", &numeros[i]);
	}

	ler(numeros, i + 1);
}

int main()
{
	int *numeros = malloc(5 * sizeof(int));

	ler(numeros, 0);

	comparar(numeros, 0, 1);
	
	imprimir(numeros);
        
	return 0;
}