#include <stdio.h>

void ordenar(int *menor, int *maior)
{
	int temp;

	if (*menor > *maior)
	{
		temp = *menor;
		*menor = *maior;
		*maior = temp;
	}
}

void multiplos_divisores(int menor, int maior, int *cont)
{
	if (menor == maior)
	{
		return;
	}

	if (1000 % menor == 0 && menor % 4 == 0)
	{
		*cont += menor;
	}

	multiplos_divisores(menor + 1, maior, cont);
}

int main()
{
	int menor, maior, contador;

	scanf("%d %d", &menor, &maior);

	ordenar(&menor, &maior);

	multiplos_divisores(menor, maior, &contador);

    printf("%d", contador);
    
	return 0;
}