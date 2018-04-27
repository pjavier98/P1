#include <stdio.h>
#include <stdlib.h>

int maior(int tamanho_vetor, int casas[], int pulos, int i, int j, int ac)
{
    if (pulos == j)
	{
		return ac;
	}

	else
	{	
		ac += casas[i % tamanho_vetor];
	}

	return maior(tamanho_vetor, casas, pulos, i + casas[i % tamanho_vetor], j + 1, ac);
}

void chamar(int tamanho_vetor, int casas[], int pulos, int i, int top, int inicio)
{
    if (tamanho_vetor == i)
    {
        printf("%d %d", inicio, top);
        return;
    }
    
    else
    {
        int a = maior(tamanho_vetor, casas, pulos, i, 0, 0);
        
        if (a > top)
        {
            top = a;
            
            inicio = i;
        }
    }
    
    chamar(tamanho_vetor, casas, pulos, i + 1, top, inicio);
}

void ler_vetor(int tamanho_vetor, int casas[], int i)
{
	if (tamanho_vetor == i)
	{
		return;
	}

	scanf("%d", &casas[i]);

	ler_vetor(tamanho_vetor, casas, i + 1);
}

int main()
{
	int tamanho_vetor, pulos;

	scanf("%d %d", &tamanho_vetor, &pulos);

	int *casas = malloc(tamanho_vetor * sizeof(int));

	ler_vetor(tamanho_vetor, casas, 0);

	chamar(tamanho_vetor, casas, pulos, 0, 0, 0);

	return 0;
}