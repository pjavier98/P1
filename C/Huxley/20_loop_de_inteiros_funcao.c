#include <stdio.h>

void numeros_1_1000(int numero)
{
	numero = 1;
	while (numero <= 1000)
	{
		printf("%d\n", numero);
		numero++;
	}
}

int main()
{
	int numero;

	numeros_1_1000(numero);
	
	return 0;
}
