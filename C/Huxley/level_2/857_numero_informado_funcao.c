#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void informar()
{
    float numero;
    
    scanf("%f", &numero);
    
    printf("Digite um numero:\nO numero informado foi: %.1f", numero);
}

int main() 
{
    informar();
    
	return 0;
}