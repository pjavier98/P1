#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void intervalo()
{
    double numero;
    
    scanf("%lf", &numero);
    
    if (numero >= 0 && numero <= 25)
    {
        printf("Intervalo [0,25]");
    }
    
    else if (numero > 25 && numero <= 50)
    {
        printf("Intervalo (25,50]");
    }
    
    else if (numero > 50 && numero <= 75)
    {
         printf("Intervalo (50,75]");
    }
    
    else if (numero > 75 && numero <= 100)
    {
        printf("Intervalo (75,100]");
    }
    
    else
    {
        printf("Fora de intervalo");
    }
}

int main() 
{
    intervalo();
    
	return 0;
}

 