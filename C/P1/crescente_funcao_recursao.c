#include <stdio.h>

void decrescente(int num)
{
	if(num < 0)
	{
		return;
	}

	decrescente(num - 1);

	printf("%d\n", num);

}


int main()
{
	int numero;
	
	scanf("%d", &numero);

	decrescente(numero);

	return 0;
}