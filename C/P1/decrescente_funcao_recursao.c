#include <stdio.h>

void decrescente(int num)
{
	if(num < 0)
	{
		return;
	}

	printf("%d\n", num);

	decrescente(num - 1);
}


int main()
{
	int numero;
	
	scanf("%d", &numero);

	decrescente(numero);

	return 0;
}