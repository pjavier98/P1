#include <stdio.h>

void ordenar(int *x, int *y) 
{	
	int temp;

	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	} 
}

void resto(int num_1, int num_2)
{
	if (num_1 == num_2)
	{
		return;
	}

	else if ((num_1 % 5 == 2) || (num_1 % 5 == 3))
	{
		printf("%d\n", num_1);
	}
	
	resto(num_1 + 1, num_2);
}

int main()
{
	int  numero_1, numero_2;

	scanf("%d %d", &numero_1, &numero_2);
	
	ordenar(&numero_1, &numero_2); 

	resto(numero_1, numero_2);

	return 0;
}