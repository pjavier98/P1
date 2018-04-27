#include <stdio.h>

void somar_matrizes(int tamanho, int matriz[tamanho][tamanho], int matriz_1[tamanho][tamanho], int i, int j)
{
	if (i == tamanho)
	{
		return;
	}

	else
	{
		if (j == tamanho)
		{

			return somar_matrizes(tamanho, matriz, matriz_1, i + 1, 0);
		}
		
		printf("%d\n", matriz[i][j] + matriz_1[i][j]);
		
		somar_matrizes(tamanho, matriz, matriz_1, i , j + 1);
	}
}

void ler_matriz(int tamanho, int matriz[tamanho][tamanho], int i, int j) 
{
	if (i == tamanho)
	{
		return;
	}

	else
	{
		if (j == tamanho)
		{

			return ler_matriz(tamanho, matriz, i + 1, 0);
		}
		scanf("%d", &matriz[i][j]);
		
		ler_matriz(tamanho, matriz, i , j+1);
	}
}

int main() 
{
	int tamanho;
	
	scanf("%d", &tamanho);
	
	if (tamanho == 0)
	{
		printf("Vazia");
	}
	
	else
	{
		int matriz[tamanho][tamanho];
		
		int matriz_1[tamanho][tamanho];

		ler_matriz(tamanho, matriz, 0, 0);
		
		ler_matriz(tamanho, matriz_1, 0, 0);
		
		somar_matrizes(tamanho, matriz, matriz_1, 0, 0);
	}
	
	return 0;
}