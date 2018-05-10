#include <stdio.h>

void comparar(int nos, int atual, int matriz[nos][2], int cont, int *maior)
{
    
    if (atual == -1)
    {   
        if (cont > *maior)
        {
            *maior = cont;
        }
        
        return;
    }
    else
    {
        cont += 1;
        
        comparar(nos, matriz[atual][0], matriz, cont, maior);
        
        comparar(nos, matriz[atual][1], matriz, cont, maior);
        
    }
}

void ler_matriz(int matriz[][2], int i, int j)
{
	if (j == 2)
	{
		return;
	}
    
	scanf("%d", &matriz[i][j]);

	ler_matriz(matriz, i, j + 1);
}

void ler(int bolas_filhos, int posicoes, int matriz[][2], int i)
{
	if (bolas_filhos == i)
	{
		return;
	}

	scanf("%d", &posicoes);

	ler_matriz(matriz, posicoes, 0);

	ler(bolas_filhos, posicoes, matriz, i + 1);
}

void zerar(int nos, int matriz[][2], int i, int j)
{
	if (i == nos)
	{
		return;
	}

	matriz[i][j] = -1;
    
    if (j == 2)
    {
        return zerar(nos, matriz, i + 1, 0);
        
    }
    
	zerar(nos, matriz, i, j + 1);
}

int main()
{
	int nos, bolas_filhos, inicio, posicoes;

	scanf("%d %d %d", &nos, &bolas_filhos, &inicio);

	int matriz[nos][2];
    
    zerar(nos, matriz, 0, 0);
    
	ler(bolas_filhos, posicoes, matriz, 0);
	
	
	int maior = 0;
	
	comparar(nos, inicio, matriz, 0, &maior);
	
	printf("%d", maior);

	return 0;
}