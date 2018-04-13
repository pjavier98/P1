#include <stdio.h>
#include <stdlib.h>

int comparacao(int num[], int i, int *maior, int *menor)
{
    if (i == 6)
    {
        return;
    }
    
	if (num[i] > *maior)
	{
		*maior = num[i];
	}
	
	if (num[i] < *menor)
	{
	    *menor = num[i];
	}
	
	comparacao(num, i + 1, maior, menor);
}

void elementos(int num[], int i) // * numero ou numero[]
{
	if (i == 6)
	{
		return;
	}

	else
	{
		scanf("%d", &num[i]);
	}
	
	elementos(num, i + 1);
}	

int main()
{
	int *numero = malloc(6 * sizeof(int));
    
	elementos(numero, 0); // le os numeros
        
    scanf("%d", &numero[0]);
    
    int maior = numero[0];
    
    int menor = numero[0];
    
    comparacao(numero, 0, &maior, &menor);
    
    printf("%d\n%d", menor, maior);
    
    return 0;
}