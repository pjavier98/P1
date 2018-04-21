#include <stdio.h>
#include <stdlib.h>

void maior(int quant, int casas[], int pulos, int i, int j)
{
    if (quant == i)
    {
        return;
    }
    
    else
    {
        if (pulos == j)
        {
            return;
        }
        
        else
        {
            printf("aqui\n");
        }
        return maior(quant, casas, pulos, i, j + 1);
    }
    
    maior(quant, casas, pulos, i + 1, 0);
}

void ler_array(int quantidade_casas, int casas[], int i)
{
	if (quantidade_casas == i)
	{
		return;
	}

	scanf("%d", &casas[i]);

	ler_array(quantidade_casas, casas, i + 1);
}

int main()
{
	int quantidade_casas, pulos;

	int *casas = malloc(quantidade_casas * sizeof(int));

	scanf("%d %d", &quantidade_casas, &pulos);

	ler_array(quantidade_casas, casas, 0);
    
    maior(quantidade_casas, casas, pulos, 0, 0);
}