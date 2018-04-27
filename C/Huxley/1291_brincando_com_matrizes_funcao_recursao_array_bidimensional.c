#include <stdio.h>

void calculos(int matriz[3][3], int i, int j, double media, int cont, int ac) 
{
	if (i == 3)
	{
		printf("%.2lf", media / 9);

		printf(" %d", ac);

		if (ac > 0)
		{
		    printf(" 1");
		}
		
		else if (ac < 0)
		{
		    printf(" -1");
		}
		
		else
		{
		    printf(" 0");
		}

		printf(" %d\n", matriz[0][0] + matriz[1][1] + matriz[2][2]);

		return;
	}
   
	else
	{
		if (j == 3)
		{

			return calculos(matriz, i + 1, 0, media, cont, ac);
		}
		
		media += matriz[i][j];

		cont = matriz[i][j];

		if (cont > ac)
		{
			ac = cont;
		}
		
		else
		{
		    if (cont > ac)
		    {
		        ac = cont;
		    }
		}
		
		calculos(matriz, i , j + 1, media, cont, ac);
	}
}

void ler_matriz(int matriz[3][3], int i, int j) 
{
	if (i == 3)
	{
		return;
	}

	else
	{
		if (j == 3)
		{

			return ler_matriz(matriz, i + 1, 0);
		}
		
		scanf("%d", &matriz[i][j]);
		
		ler_matriz(matriz, i, j + 1);
	}
}

int main() 
{
	int matriz[3][3];

	ler_matriz(matriz, 0, 0);

	calculos(matriz, 0, 0, 0, 0, -2147483648);
}