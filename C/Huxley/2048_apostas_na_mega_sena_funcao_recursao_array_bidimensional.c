#include <stdio.h>

int ganhadores(int linhas, int quant[linhas], int numeros[linhas][10], int resultado[6], int i, int j, int n, int cont)
{
    if (j == 6)
    {
        return cont;
    }
    
    if (n == quant[i])
    {
        return ganhadores(linhas, quant, numeros, resultado, i, j + 1, 0, cont);
    }
    
    if (resultado[j] == numeros[i][n])
    {
        cont += 1;
    }
    
    ganhadores(linhas, quant, numeros, resultado, i, j, n + 1, cont);
}

void comparar(int linhas, int quant[linhas], int numeros[linhas][10], int resultado[6], int i, int sorteados)
{
    if (i == linhas)
    {
        printf("Total de ganhadores: %d", sorteados);
        
        return;
    }
    
    int ac = ganhadores(linhas, quant, numeros, resultado, i, 0, 0, 0);
    
    if (ac >= 6)
    {
        sorteados += 1;
    }
    
    comparar(linhas, quant, numeros, resultado, i + 1, sorteados);
}


void ler_resultado(int resultado[6], int i)
{
	if (i == 6)
	{
		return;
	}

	scanf("%d", &resultado[i]);

	ler_resultado(resultado, i + 1);
}

void ler_array(int linhas, int numeros[linhas][10], char simbolo, int i, int j, int quant[linhas])
{
	if (i == linhas)
	{
		return;
	}

	else
	{
		scanf("%d", &numeros[i][j]);
		
		quant[i] += 1;
		
		scanf("%c", &simbolo);
		
		if (simbolo == '\n')
		{   
			return ler_array(linhas, numeros, simbolo, i + 1, 0, quant);
		}
		
		ler_array(linhas, numeros, simbolo, i, j + 1, quant);
	}
}

void zerar(int linhas, int quant[linhas], int i)
{
	if (i == linhas)
	{
		return;
	}

	quant[i] = 0;

	zerar(linhas, quant, i + 1);
}

int main()
{
	int linhas;
	char simbolo; 

	scanf("%d", &linhas);

	int numeros[linhas][10];
	int quant[linhas];
	int resultado[10] = {0};

	zerar(linhas, quant, 0);
	ler_array(linhas, numeros, simbolo, 0, 0, quant);
	ler_resultado(resultado, 0);
	comparar(linhas, quant, numeros, resultado, 0, 0);
}