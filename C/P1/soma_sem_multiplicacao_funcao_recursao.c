#include <stdio.h>

int somador(int num1, int num2)
{
	if(num2 == 0)
	{
		return 0;
	}

	return num1 + somador(num1, num2 - 1);
}

int main()
{
	int numero1, numero2;

	scanf("%d %d", &numero1, &numero2);

	printf("%d\n", somador(numero1, numero2));
}