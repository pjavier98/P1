#include <stdio.h>
#include <stdlib.h>

void repetir(int numeros[], int i, int comparar, int *cont) // i - variavel que guarda os valores
{
    if (i >= 10)
    {
        return;
    }
    
    if (numeros[i] == comparar)
    {
        *cont += 1;
    }
    repetir(numeros, i + 1, comparar, cont);
}

void leitura(int numeros[], int i)
{
	if (i == 10)
	{
		return;
	}

	else
	{
		scanf("%d", &numeros[i]);
	}
	
	leitura(numeros, i + 1);
}

int main()
{
	int *numeros = malloc(10 * sizeof(int));
	
	int comparar;
	
	int contador = 0;

	leitura(numeros, 0);

	scanf("%d", &comparar);

    repetir(numeros, 0, comparar, &contador);
    
    printf("%d", contador);

	return 0;
}