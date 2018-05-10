#include <stdio.h>

void print(int linhas, int array[linhas], int i)
{
    if (linhas == i)
    {
        return;
    }
    
    if (array[i] != -1)
    {
        if (array[i - 1] != array[i])
        {
            printf("%d\n", array[i]);
        }
    }
    
    print(linhas, array, i + 1);
}

void troca(int *a, int *b)
{
	int temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void ordenar(int quantidade, int cont[quantidade], int i, int j)
{
	if (quantidade == i)
	{
	    return;
	}

	if (j < quantidade)
	{
		if (cont[i] > cont[j])
		{
			troca(&cont[i], &cont[j]);
		}

		ordenar(quantidade, cont, i, j + 1);
		
		return;
	}
	
	ordenar(quantidade, cont, i + 1, j = i + 1);
}

void comparar(int linhas, int atual, int arvore[linhas][2], int cont, int array[linhas])
{
    if (arvore[atual][0] == -1 && arvore[atual][1] == -1)
    { 
        array[atual] = cont;
    }
    
    if (atual == -1)
    {
        return;
    }
    
    if (arvore[atual][0] != -1 || arvore[atual][1] != -1)
    {
        cont = atual;
    }
    
    comparar(linhas, arvore[atual][0], arvore, cont, array);
        
    comparar(linhas, arvore[atual][1], arvore, cont, array);
    
}

void ler(int linhas, int arvore[linhas][2], int i, int j)
{
	if (linhas == i)
	{
		return;
	}

	else
	{
		if (j == 2)
		{
			return ler(linhas, arvore, i + 1, 0);
		}

		scanf("%d", &arvore[i][j]);
		
		ler(linhas, arvore, i, j + 1);
	}
}

void zerar(int tamanho, int array[tamanho], int i)
{
    if (i == tamanho)
    {
        return;
    }
    
    array[i] = -1;
    
    zerar(tamanho, array, i + 1);
}

int main()
{
	int linhas;

	scanf("%d", &linhas);

	int arvore[linhas][2];
   
    int array[linhas];
    
	ler(linhas, arvore, 0, 0);
	
	zerar(linhas, array, 0);
	
	comparar(linhas, 0, arvore, 0, array);

	ordenar(linhas, array, 0, 0);
	
	print(linhas, array, 0);
	
	return 0;
}