#include <stdio.h>

int divisor(int num, int div, int cont)
{
    if (div > num)  
    {
        return cont;
    }
    
    else
    {
        if (num % div == 0)
        {
            if (div % 3 == 0)
            {
                cont += 1;
            }
        }
    }
    
    divisor(num, div + 1, cont);
}

int main() 
{
    int numero, divisores, contador;
    
    scanf("%d", &numero);
    
    divisores = 1;
    
    contador = 0;
    
    int resultado = divisor(numero, divisores, contador);
    
    if (resultado > 0)
    {
        printf("%d", resultado);
    }
    
    else
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    
	return 0;
}