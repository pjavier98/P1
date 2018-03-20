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

int contador(int num1, int num2, int temp, int mult)
{	
	if (mult >= 50)
	{
	    if(num2 % num1 == 0)
	    {
		    return temp + 1;
	    }
	    else
	    {
	        return temp;
	    }
	}
    
	if ((mult % num1 == 0) && (mult % num2 == 0))
	{
		temp += 1;
	}
	
	contador(num1, num2, temp, mult + 1);
}

int main()
{
	int numero1, numero2, temporal, multiplo;

	scanf("%d %d", &numero1, &numero2);

	temporal = 0;
	
	if (numero1 * numero2 < 50)
	{
		multiplo = numero1 * numero2;
	}
	
	ordenar(&numero1, &numero2);
	
	printf("%d",contador(numero1, numero2, temporal, multiplo));

	return 0;
}