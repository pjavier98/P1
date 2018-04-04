#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void dobro(double num)
{
    printf("Informe a medida de um dos lados do quadrado:\n");
    
    printf("Resultado: %.1lf\n", num * num);
    
    printf("Dobro: %.1lf", num * num * 2);
}

int main() 
{
    int numero;
    
    scanf("%d", &numero);
    
    dobro(numero);
    
	return 0;
}

/*Informe a medida de um dos lados do quadrado:
Resultado: 25.0 
Dobro: 50.0*/