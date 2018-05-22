#include <stdio.h>

int pontos = 0;

void tesouro(int i, int j, int n, int m, int aux, char matriz[n][m])
{
	char k;

	if(pontos < aux)
	{
	   // printf("i=%d, j=%d, pontos=%d, aux=%d\n", i, j, pontos, aux);
	    
		pontos = aux;
		
	}

	if(matriz[i][j] == '#' || i >= n || i < 0 || j >= m || j < 0)
	{
	   // printf("parei\n");
		return;
	}
	else
	{
	   // printf("casa atual: %c\n", matriz[i][j]);
		if(matriz[i][j] == 'b')
		{
			aux += 1;
		}

		if(matriz[i][j] == 'p')
		{
		  //  printf("prata>> %d", aux);
			aux += 5;
// 			printf(" %d\n", aux);
		}

		if(matriz[i][j] == 'o')
		{
			aux += 10;
		}

		if(matriz[i][j] == 'd')
		{
			aux += 50;
		}

		k = matriz[i][j];
		matriz[i][j] = '#';
            
        tesouro(i + 1, j,n, m, aux, matriz);
		tesouro(i - 1, j,n, m, aux, matriz);
	    tesouro(i, j - 1,n, m, aux, matriz);
		tesouro(i, j + 1,n, m, aux, matriz);

			
		matriz[i][j] = k;
		
	}


	return;


}

int main()
{
	int n, m, i = 0, j = 0;
	scanf("%d %d", &n, &m);
	getchar();
	
	char matriz[n][m];

	for(i = 0; i < n;i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%c", &matriz[i][j]);
		}
		
		getchar();
	}

	tesouro(0, 0, n, m, 0, matriz);
	printf("%d\n", pontos);

	return 0;
}