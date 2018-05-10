#include <stdio.h>

int comparar_colunas(int sudoku[9][9], int num[9], int i, int j, int k, int cont)
{
    if (j == 9)
    {
        return 1;
    }
    
    else
    {
        if (i == 9)
        {
            if (k == 9)
            {
                return comparar_colunas(sudoku, num, 0, j + 1, 0, 0);
            }
            
            else
            {
                return comparar_colunas(sudoku, num, 0, j, k + 1, 0);
            }
        }
        
        if (sudoku[i][j] == num[k])
        {
            cont += 1;
        }
        
        if (cont > 1)
        {
            return 0;
        }
        
        comparar_colunas(sudoku, num, i + 1, j, k, cont);
    }
}

int comparar_linhas(int sudoku[9][9], int num[9], int i, int j, int k, int cont)
{
    if (i == 9)
    {
        return 1;
    }
    
    else
    {
        if (j == 9)
        {
            if (k == 9)
            {
                return comparar_linhas(sudoku, num, i + 1, 0, 0, 0);
            }
            
            else
            {
                return comparar_linhas(sudoku, num, i, 0, k + 1, 0);
            }
        }
        
        if (sudoku[i][j] == num[k])
        {
            cont += 1;
        }
        
        if (cont > 1)
        {
            return 0;
        }
        
        comparar_linhas(sudoku, num, i, j + 1, k, cont);
    }
}

void ler(int sudoku[9][9], int i, int j)
{
	if (i == 9)
	{
		return;
	}

	else
	{
		if (j == 9)
		{
			return ler(sudoku, i + 1, 0);
		}

		scanf("%d", &sudoku[i][j]);

		ler(sudoku, i, j + 1);
	}
}

void quantidade(int quant, int sudoku[9][9], int numeros[9], int i)
{
    int res_1 = 0;
    int res_2 = 0;
    
    if (quant == i)
    {
        return;
    }
    
    else
    {
        ler(sudoku, 0, 0);
        
	    res_1 = comparar_linhas(sudoku, numeros, 0, 0, 0, 0);
	
    	if (res_1 == 1)
	    {
    	    res_2 = comparar_colunas(sudoku, numeros, 0, 0, 0, 0);
	    }
	
    	if (res_2 == 1)
    	{
	         printf("Instancia %d\nSIM\n", i + 1);
    	}
    	
    	else
    	{
    	    printf("Instancia %d\nNAO\n", i + 1);
    	}
    	
    	printf("\n");
    }
    
    quantidade(quant, sudoku, numeros, i + 1);
}

int main()
{
	int quantidade_sudokus;

	scanf("%d", &quantidade_sudokus);

	int sudoku[9][9];
	int numeros[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    quantidade(quantidade_sudokus, sudoku, numeros, 0);
    
    return 0;
}