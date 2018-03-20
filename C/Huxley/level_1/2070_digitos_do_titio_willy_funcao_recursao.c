#include <stdio.h>
#include <math.h>

int digitos(int num, int cont)
{
	if(num < 10)
	{
		return 1 + cont;
	}

	digitos(num / 10, cont + 1);
}

int divisor(int expoente)
{
	if (expoente == 0)
	{
		return 1;
	}
	if (expoente == 1)
	{
		return 10;
	}
	else
	{
		return 10 * divisor(expoente - 1);
	}
}

int par_impar(int num, int valor, int cont)
{
    int temp = digitos(num, cont);
    
    int dig = (num / divisor (temp - 1));
    
	if (temp <= 1)
	{
	    if (dig % 2 == 0)
	    {
	        return valor + dig * 2;
	    }
	    
	    else
	    {
	        return valor + dig * 3;
	    }
	    
	}
	    
	if (dig % 2 == 0)
	{
		valor += dig * 2 * temp;
		
	}

	else
	{
		valor += dig * 3 * temp;
	}
	par_impar(num - (dig * divisor(temp - 1)), valor, cont);

}

void stop(int num, int cont, int guardar_valor)
{
	if(num == 0)
	{
		return;
	}

	printf("%d\n", par_impar(num, guardar_valor, cont));

	scanf("%d", &num);
	
	stop(num, cont, guardar_valor);
}


int main()
{
	int numeros, contador, acumulador;

	contador = 0;

	acumulador = 0;

	scanf("%d", &numeros);

	stop(numeros, contador, acumulador);
	
}