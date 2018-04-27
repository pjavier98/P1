#include <stdio.h>

void comparar(int linhas, int colunas, int letras, int mapa[linhas][colunas], int movimentos[letras], int x, int y, int k)
{
	if (letras == k)
	{
		printf("(%d,%d)\n", x, y);
		return;
	}

	if (movimentos[k] == 'C')
	{
		if (mapa[x - 1][y] == 1)
		{
			x = x - 1;
		}
	}

	else if (movimentos[k] == 'B')
	{
		if (mapa[x + 1][y] == 1)
		{
			x = x + 1;
		}
	}

	else if (movimentos[k] == 'D')
	{
		if (mapa[x][y + 1] == 1)
		{
			y = y + 1;
		}
	}

	else if (movimentos[k] == 'E')
	{
		if (mapa[x][y - 1] == 1)
		{
			y = y - 1;
		}
	}

	comparar(linhas, colunas, letras, mapa, movimentos, x, y, k + 1);
}


void ler_posicao(int letras, int movimentos[letras], int i)
{
	if (i == letras)
	{
		return;
	}

	scanf("%c ", &movimentos[i]);
	
	ler_posicao(letras, movimentos, i + 1);
}

void ler_mapa(int linhas, int colunas, int mapa[linhas][colunas], int i, int j)
{
	if (i == linhas)
	{
		return;
	}

	else
	{
		if (j == colunas)
		{
			return ler_mapa(linhas, colunas, mapa, i + 1, 0);
		}

		scanf("%d", &mapa[i][j]);
	
		ler_mapa(linhas, colunas, mapa, i, j + 1);
	}
}

int main()
{
	int linhas, colunas;
	int letras;
	int x, y; // posicoes iniciais;

	scanf("%d %d", &linhas, &colunas);

	int mapa[linhas][colunas];

	ler_mapa(linhas, colunas, mapa, 0, 0);

	scanf("%d ", &letras);

	char movimentos[letras];

	ler_posicao(letras, movimentos, 0);
	
	scanf("%d %d", &x, &y);
	
	comparar(linhas, colunas, letras, mapa, movimentos, x, y, 0);
}