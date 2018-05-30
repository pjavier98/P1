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


int main()
{
	int  numero_1, numero_2;

	scanf("%d %d", &numero_1, &numero_2);
	
	ordenar(&numero_1, &numero_2); 

	return 0;
}