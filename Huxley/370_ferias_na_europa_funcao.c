#include <stdio.h>

void dinheiro(double dias)
{
	printf("%.2lf\n", dias * 20 * 3.2);
}

int main()
{
	int dias;

	scanf("%d", &dias);

	dinheiro(dias);

	return 0;
}