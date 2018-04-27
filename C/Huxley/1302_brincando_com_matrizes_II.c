#include <stdio.h>

void comparacoes(int matriz[3][3], int i, int j, double *cont, int *ac, int *soma)
{
	if (i == 3)
	{
		return;
	}

	else
	{
		if (j == 3)
		{
            return comparacoes(matriz, i + 1, 0, cont, ac, soma);
		}

		if(matriz[i][j] > 0)
		{
			*ac += 1;

			*cont += matriz[i][j];
		}
		
		if (i != j)
		{
		    *soma += matriz[i][j];
		}

		comparacoes(matriz, i , j + 1, cont, ac, soma);
	}
}

void ler_matriz(int matriz[3][3], int i, int j, int cont, int *temp) 
{
	if (i == 3)
	{
		return;
	}

	else
	{
		if (j == 3)
		{

			return ler_matriz(matriz, i + 1, 0, cont, temp);
		}

		scanf("%d", &matriz[i][j]);
		
		cont = matriz[i][j];
		
		if (cont < *temp)
		{
		    *temp = cont;
		}
		
		ler_matriz(matriz, i , j + 1, cont, temp);
	}
}

int main() 
{
	int matriz[3][3], temp, ac, soma;
    
    temp = 2147483647;
    
    ac = 0;
    
    soma = 0;
    
    double cont = 0;
    
	ler_matriz(matriz, 0, 0, 0, &temp);
	
	comparacoes(matriz, 0, 0, &cont, &ac, &soma);
    
    printf("%.2lf ", cont / ac);
    
    if (temp % 2 == 0)
    {
        printf("%d 1 ", temp);
    }
    
    else
    {
        printf("%d 0 ", temp);
    }
    
    printf("%d", soma);
    
	return 0;
}