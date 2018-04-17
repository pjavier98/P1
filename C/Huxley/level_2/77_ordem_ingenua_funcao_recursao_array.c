#include <stdio.h>
#include <stdlib.h>

void imprimir(int quantidade, int num[], int i)
{
    if (quantidade == i)
    {
        return;
    }
    
    else
    {
        printf("[%d] ", num[i]);
    }
    
    imprimir(quantidade, num, i + 1);
}

void troca(int *a, int *b)
{
	int temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void comparar(int quantidade, int num[], int i, int j)
{
	if (quantidade == i)
	{
	    return;
	}

	if (j < quantidade)
	{
		if (num[i] > num[j])
		{
			troca(&num[i], &num[j]);
		}

		comparar(quantidade, num, i, j + 1);
	}

	
	comparar(quantidade, num, i + 1, j = i + 1);

}

void ler(int quantidade, int numeros[], int i)
{
	if (quantidade == i)
	{
		return;
	}

	else
	{
		scanf("%d", &numeros[i]);
	}

	ler(quantidade, numeros, i + 1);
}

int main()
{
	int quantidade;

	scanf("%d", &quantidade);

	int *numeros = malloc(quantidade * sizeof(int));

	ler(quantidade, numeros, 0);

	comparar(quantidade, numeros, 0, 1);
	
	imprimir(quantidade, numeros, 0);
        
	return 0;
}