#include <stdio.h>

void divisor(int num, int div, int *cont)
{
    if (div > num)  
    {
        return;
    }
    
    else
    {
        if (num % div == 0)
        {
            if (div % 3 == 0)
            {
                *cont += 1;
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
    
    divisor(numero, divisores, &contador);
    
    if (contador > 0)
    {
        printf("%d", contador);
    }
    
    else
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }
    
	return 0;
}