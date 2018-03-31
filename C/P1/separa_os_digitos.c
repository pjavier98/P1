#include <stdio.h>
#include <math.h>



void happy(int num, int temp, int digito)
{
    if (num < 1)
    {
        return;
    }
	
	if (num > 0 && num < 10)
	{
		printf("%d\n", num);
	}

	else
	{
		temp = num % 10;
		printf("%d\n", temp);
	}
	
	happy(num / 10, temp, digito);
}


int main()
{
    int numero, temp, digito;

	scanf("%d", &numero);

	happy(numero, temp, digito);
	
	return 0;
}