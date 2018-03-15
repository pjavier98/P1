#include <stdio.h>
int ordenar(int *x, int *y)
{
	int temp;
	
	if(*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
}

void contador(int num1, int num2, int multiplo)
{	
	int cont;

	if(multiplo <= num2)
	{
	    return;
	}
	if(multiplo % num1 == 0 && multiplo % num2 == 0)
	{
		cont++;
	}
	contador(num1, num2, multiplo-1);
	printf("%d\n", cont);
}

int main()
{
	int numero1, numero2, multiplo;

	multiplo = 50;

	scanf("%d %d", &numero1, &numero2);
	
	ordenar(&numero1, &numero2);

	contador (numero1, numero2, multiplo);	
	
	return 0;
}