#include <stdio.h>

void pintar(int linha, int coluna, char matriz[linha][coluna], int pos_i, int pos_j, int cor)
{
	if ((pos_i < 0) || (pos_i >= linha) || (pos_i < 0) || (pos_j >= coluna) || (pos_j < 0) || (matriz[pos_i][pos_j] == '#'))
	{
		return;
	}
	
	if (matriz[pos_i][pos_j] == cor)
	{
	    return;
	}
	
	else
	{
		matriz[pos_i][pos_j] = cor;
	}
	
	
	pintar(linha, coluna, matriz, pos_i, pos_j - 1, cor);
	pintar(linha, coluna, matriz, pos_i - 1, pos_j, cor);
	pintar(linha, coluna, matriz, pos_i + 1, pos_j, cor);
	pintar(linha, coluna, matriz, pos_i, pos_j + 1, cor);
	
}

int main()
{
	int linha, coluna;
	int i, j, k, l;
	int pos_i, pos_j;
	char cor;
	
	scanf("%d %d", &linha, &coluna);
	//printf("%d %d\n", linha, coluna);
	
	char matriz[linha][coluna];
	
	for (i = 0; i < linha; i += 1)
	{
		for (j = 0; j < coluna; j += 1)
		{
			scanf(" %c", &matriz[i][j]);
			//printf("%c", matriz[i][j]);
		}
		//printf("\n");
	}
	
	int pintadas;
	
	scanf("%d", &pintadas);
	//printf("%d\n", pintadas);
	
	for (i = 0; i < pintadas; i += 1)
	{
		scanf("%d %d %c", &pos_i, &pos_j, &cor);
		
	    //printf("%d %d %d\n", pos_i, pos_j, cor);
		pintar(linha, coluna, matriz, pos_i, pos_j, cor);
	
		for (k = 0; k < linha; k += 1)
		{
			for (l = 0; l < coluna; l += 1)
			{
				printf("%c", matriz[k][l]);
			}
		    printf("\n");
		} 
		printf("\n");
	}
	
	return 0;
}