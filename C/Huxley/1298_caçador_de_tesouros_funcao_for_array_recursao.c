#include <stdio.h>

void percorrer(int linhas, int colunas, int i, int j, char matriz[linhas][colunas], int cont, int *maior)
{
    if (matriz[i][j] == '#' || i < 0 || j < 0 || i >= linhas || j >= colunas)
    {
        if (cont > *maior)
        {
            *maior = cont;
        }
        
    	return;
    }

    else
    {
        
        if (matriz[i][j] == 'd')
        {
            cont += 50;
        }
        
        else if (matriz[i][j] == 'o')
        {
            cont += 10;
        }
        
        else if (matriz[i][j] == 'p')
        {
            cont += 5;
        }
        
        else if (matriz[i][j] == 'b')
        {
            cont += 1;
        }
        
        char salvar = matriz[i][j]; // salva o conteudo da posicao atual
        matriz[i][j] = '#'; // trava a posicao atual, marcando que ja passou por ali
        percorrer(linhas, colunas, i - 1, j, matriz, cont, maior);
        percorrer(linhas, colunas, i + 1, j, matriz, cont, maior);
        percorrer(linhas, colunas, i, j - 1, matriz, cont, maior);
        percorrer(linhas, colunas, i, j + 1, matriz, cont, maior);
        
        matriz[i][j] = salvar; // devolve a posicao atual seu conteudo anterior para conseguir percorrer dnv
    }
}

int main()
{
	int linhas, colunas, i, j;

	scanf("%d %d", &linhas, &colunas);
	//printf("%d %d\n", linhas, colunas);

	char matriz[linhas][colunas];

	for (i = 0; i < linhas; i += 1)
	{
		for (j = 0; j < colunas; j += 1)
		{
			scanf(" %c", &matriz[i][j]);
		}
	}

	/*for (i = 0; i < linhas; i += 1)
	{
		if (i != 0)
		{
			printf("\n");
		}
		
		for (j = 0; j < colunas; j += 1)
		{
			printf("%c", matriz[i][j]);
		}
	}*/
	
	int maior = 0;
    
	percorrer (linhas, colunas, 0, 0, matriz, 0, &maior);
	
	printf("%d\n", maior);

	return 0;
}
