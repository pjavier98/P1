#include <stdio.h>

void verificar (int tam, char matriz[tam][tam], int x, int y)
{
    if (matriz[x][y] == '_')
    {
        if (x + 1 >= tam)
        {
            if (matriz[tam % (x + 1)][y] == '&')
            {
                matriz[tam % (x + 1)][y] = '_';
            }
        }
        
        else
        {
            if (matriz[x + 1][y] == '&')
            {
                matriz[x + 1][y] = '_';
            }
        }
        
        if (x - 1 < 0)
        {
            if (matriz[tam + (x - 1)][y] == '&')
            {
                matriz[tam + (x - 1)][y] = '_';
            }
        }
        
        else
        {
            if (matriz[x - 1][y] == '&')
            {
                matriz[x - 1][y] = '_';
            }
        }
        
        if (y - 1 < 0)
        {
            if (matriz[x][tam + (y - 1)] == '&')
            {
                matriz[x][tam + (y - 1)] = '_';
            }
        }
        
        else
        {
            if (matriz[x][y - 1] == '&')
            {
                matriz[x][y - 1] = '_';
            }
        }
        
        if (y + 1 >= tam)
        {
            if (matriz[x][tam % (y + 1)] == '&')
            {
                matriz[x][tam % (y + 1)] = '_';
            }
        }
        
        else
        {
            if (matriz[x][y + 1] == '&')
            {
                matriz[x][y + 1] = '_';
            }
        }
        
    }
}

int main()
{
	int tamanho, i, j; // i - linhas ; j - colunas

	scanf("%d", &tamanho);
	//printf("%d", tamanho);

	char matriz[tamanho][tamanho];

	for (i = 0; i < tamanho; i += 1)
	{
		for (j = 0; j < tamanho; j += 1)
		{
			scanf(" %c", &matriz[i][j]);

		}
	}

	/*for (i = 0; i < tamanho; i += 1)
	{	
	    printf("\n");
	    
		for (j = 0; j < tamanho; j += 1)
		{
			printf("%c", matriz[i][j]);
			
		}
	}*/
	
	int bombas;

	scanf("%d", &bombas);
    //printf("\n%d\n", bombas);
	
	int x, y;

	for (i = 0; i < bombas; i += 1)
	{
		scanf("%d %d", &x, &y);
		
		verificar(tamanho, matriz, x, y);
		//printf("%d %d\n", x, y);
	}
	
	for (i = 0; i < tamanho; i += 1)
	{	
	    printf("\n");
	    
		for (j = 0; j < tamanho; j += 1)
		{
			printf("%c", matriz[i][j]);
			
		}
	}
    
	return 0;	
}	