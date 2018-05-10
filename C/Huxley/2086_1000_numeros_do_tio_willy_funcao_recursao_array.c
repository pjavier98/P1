#include <stdio.h>

void comparar(int array[1000], int repetido, int i, int cont)
{
	if (i == 1000)
	{
		printf("%d appeared %d times\n", repetido, cont);

		return;
	}

	if (array[i] == repetido)
	{
		cont += 1;
	}

	comparar(array, repetido, i + 1, cont);
}

void ler(int array[1000], int i)
{
	int repetido;

	if (i == 1000)
	{	
		scanf("%d", &repetido);

		comparar(array, repetido, 0, 0);

	    return ler(array, 0);
	}
	
	scanf("%d", &array[i]);
    
    if (array[i] == -1)
	{
		return;
	}
	
	ler(array, i + 1);
}


int main()
{
	int array[1000];

	ler(array, 0);

	return 0;
}