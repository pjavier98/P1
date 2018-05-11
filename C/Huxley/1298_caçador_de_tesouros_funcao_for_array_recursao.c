#include <stdio.h>
#include <string.h>

int main()
{
	int linhas, colunas;

	scanf("%d %d", &linhas, &colunas);

	char mapa[linhas][colunas];
	int i = 0; // linhas
	int j = 0; // colunas

	for (i = 0; i < linhas; i += 1)
	{	
		for (j = 0; j < colunas; j += 1)
		{
			scanf(" %c", &mapa[i][j]);
		}
	}
	
	for (i = 0; i < linhas; i += 1)
	{	
		printf("\n");
		for (j = 0; j < colunas; j += 1)
		{
			printf("%c", mapa[i][j]);
		}
	}

	return 0;
}