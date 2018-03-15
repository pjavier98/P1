#include <stdio.h>

int maior_multiplo(int number)
{
    
	int number_seguinte;
    
	scanf("%d", &number_seguinte);		
	
	if (number_seguinte == 0)
	{
	    return number;
	}

	else if (number_seguinte > number)
	{
		number = number_seguinte;
	}

	maior_multiplo(number);
}

int main()
{
	int numero;
	
	scanf("%d", &numero);

	printf("%d",maior_multiplo(numero));
	
	return 0;
}