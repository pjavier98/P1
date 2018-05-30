#include <stdio.h>

void calcular(int linhas, int matriz[linhas][2], int array[linhas], int atual, int max[linhas], int min[linhas], int nivel)
{
	if (atual == -1)
	{
		return;
	}

	else
	{
		if (max[nivel] < array[atual])
		{
			max[nivel] = array[atual];
		}

		if (min[nivel] > array[atual])
		{
			min[nivel] = array[atual];
		}

		calcular(linhas, matriz, array, matriz[atual][0], max, min, nivel + 1);
		
		calcular(linhas, matriz, array, matriz[atual][1], max, min, nivel + 1);
	}
}

int main()
{
	int linhas, i, j, cont;
	
	cont = 0;

	scanf("%d", &linhas);
	//printf("%d\n", linhas);

	int array[linhas];
	int matriz[linhas][2];
	int max[linhas];
	int min[linhas];

	for (i = 0; i < linhas; i += 1)
	{
		scanf("%d", &array[i]);
		
		for (j = 0; j < 2; j += 1)
		{
			scanf("%d", &matriz[i][j]);
			//printf(" %d", matriz[i][j]);
		}
	}

	for (i = 0; i < linhas; i += 1)
	{
		max[i] = -999;
		min[i] =  999;
	}
    
    calcular(linhas, matriz, array, 0, max, min, 0);
    
    for (i = 0; i < linhas; i += 1)
    {
        if (max[i] != -999) // poderia ser min[i] != 999 mas so um � suficiente
        {
    	    printf("Nivel %d: Maior = %d, Menor = %d\n", i + 1, max[i], min[i]);
        }
    }

	return 0;
}