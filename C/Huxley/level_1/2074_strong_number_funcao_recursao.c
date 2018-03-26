#include <stdio.h>

int fatorial(int fator)
{
	if (fator <= 1)
	{
		return 1;
	}
	
	return fator * fatorial(fator - 1);
}

void strong(int num, int cont, int temp, int guardar)
{
	if (num >= 0 && num < 10)
	{
		temp += fatorial(num);
		
		if (guardar == temp)
		{
		    printf("S");
		}
		
		else
		{
		    printf("N\n%d", temp);
		}
		
		return;
	}

	else
	{
	   cont = num % 10;

	   temp += fatorial(cont);
	   
	}
    
    strong(num / 10, cont, temp, guardar);
}

int main()
{
	int numero_strong, contador, temporal, guardar;

    scanf("%d", &numero_strong);
	
	contador = 0;
	
	temporal = 0;

	guardar = numero_strong;

    strong(numero_strong, contador, temporal, guardar);

	return 0;
}
