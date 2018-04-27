#include <stdio.h>

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
		ler_matriz(matriz, i , j+1);
	}
}

int main() 
{
	int matriz[3][3];

	ler_matriz(matriz, 0, 0);

	printf("%d\n", matriz[0][0]);
}