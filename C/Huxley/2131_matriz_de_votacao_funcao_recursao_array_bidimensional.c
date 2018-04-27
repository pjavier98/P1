#include <stdio.h>

int votos(int linhas, int colunas, int i, int j, int matriz[linhas][colunas], int cont)
{
    if (i == linhas)
    {
        return cont;
    }
    
    if (matriz[i][j] == 1)
    {
        cont += 1;
    }
    
    votos(linhas, colunas, i + 1, j, matriz, cont);
}

void repetir(int linhas, int colunas, int matriz[linhas][colunas], int j)
{
    if (j == colunas)
    {
        return;
    }
    
    int printar = votos(linhas, colunas, 0, j, matriz, 0);
    
    printf("Princesa %d: %d voto(s)\n", j + 1, printar);
    
    repetir(linhas, colunas, matriz, j + 1);
}

void ler_matriz(int linhas, int colunas, int matriz[linhas][colunas], int i, int j) /* i -> linha / j -> coluna */
{
	if (i == linhas)
	{
		return;
	}

	if (j < colunas)
	{
		scanf("%d", &matriz[i][j]);
	 
		return ler_matriz(linhas, colunas, matriz, i, j + 1);
	}
	
	ler_matriz(linhas, colunas, matriz, i + 1, 0);
}

int main()
{
    int colunas, linhas;
    
    scanf("%d %d", &colunas, &linhas);
    
    int matriz[linhas][colunas];
    
    ler_matriz(linhas, colunas, matriz, 0, 0);
    
    repetir(linhas, colunas, matriz, 0);
    
    return 0;
}