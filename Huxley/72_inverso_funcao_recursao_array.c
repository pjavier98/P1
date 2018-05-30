#include <stdio.h>
#include <stdlib.h>


void imprimir(int tamanho, int num[])
{
	if(tamanho < 0)
	{
		return;
	}
	
	printf("%d ", num[tamanho]);

	imprimir(tamanho - 1, num);
}

void vetor(int i, int num[], int tamanho)
{	
    
	if(i == tamanho)
	{
		return;
	}

	scanf("%d", &num[i]);

	vetor(i + 1, num, tamanho);
}

int main()
{
    int tamanho;
    
    scanf("%d", &tamanho);
    
	int *numeros = malloc(tamanho * sizeof(int));
	
	vetor(0, numeros, tamanho);

    imprimir(tamanho - 1, numeros);
    
	return 0;
}