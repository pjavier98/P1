#include <stdio.h>

int digitos(int num, int cont)
{
	if(num < 10)
	{
		return cont += 1 + cont;
	}

	digitos(num / 10, cont + 1);

	return cont;
}

void par_impar(int num, int valor, int cont)
{
    int temp = digitos(num,cont);
    
    if (num < 0)
    {
    	return;
    }
	if (num < 10)
	{
	    if (num % 2 == 0)
	    {
	        valor + num * 2;
	    }
	    
	    else
	    {
	        valor + num * 3;
	    }
	    
	}
	    
	if (num % 2 == 0)
	{
		valor += (num % 10) * 2 * temp--;
		
	}

	else
	{
		valor += (num % 10) * 3 * temp--;
	}
	
	par_impar(num / 10, valor, cont);


}

int main()
{
	int numeros, acumulador, contador;

	acumulador = 0;

	contador = 0;

	scanf("%d", &numeros);

	par_impar(numeros, acumulador, contador);

}