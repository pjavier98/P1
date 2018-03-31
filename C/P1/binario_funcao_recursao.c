#include <stdio.h>

void binario(int num1, int cont)
{
	if (num1 == 0)
	{
		return;
	}

	if (num1 % 2 == 0)
	{
		cont = 0;
	}

	else
	{
		cont = 1;
	}

	binario(num1 / 2, cont);

	printf("%d\n", cont);
}	

int main()
{
	int numero, contador;

	scanf("%d", &numero);
	
	if (numero == 0)
	{
	    printf("0");
	}
    
    else
    {
	    binario(numero, contador);
    }
	return 0;
}