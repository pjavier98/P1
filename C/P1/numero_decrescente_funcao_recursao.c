#include <stdio.h>

void decrescente(int num1)
{
	if(num1 < 0)
	{
		return;
	}
	printf("%d\n", num1);

	decrescente(num1 - 1);
}

int main()
{
	int numero_decrescente;
	
	scanf("%d", &numero_decrescente);

	decrescente(numero_decrescente);
}