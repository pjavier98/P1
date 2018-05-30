#include <stdio.h>

void divisores(int x, int y)
{
	if (x == 0)
	{
		return;
	}

	if (y % x == 0 || y % x == x)
	{
		printf("%d\n", x);
	}
	
	divisores(x - 1, y);
}

int main()
{
	int numero_x, numero_y;

	scanf("%d", &numero_x);

	numero_y = numero_x; // o y pega o valor de x, mas nao deixa com 0, x = 10 , y = 10

	divisores(numero_x, numero_y);

	return 0;
}