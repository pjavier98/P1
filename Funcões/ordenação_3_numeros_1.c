#include <stdio.h>

void ordenar(int *x, int *y, int *z)
{	
	int temp;

	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	} 

	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	} 

	if (*y > *z)
	{
		temp = *z;
		*z = *y;
		*y = temp;
	} 
}

int main()
{
	int  a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	ordenar(&a, &b, &c);
	
	printf("%d %d %d\n", a, b, c);

	return 0;
}