#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    float altura, peso;
    
    double ideal;
    
    scanf("%f", &altura);
    
    peso = altura;
    
    ideal = (altura * 72.7) - 58;
    
    printf("Informe sua altura:\n");
    
    printf("Peso ideal: %.14lf", ideal);
    
	return 0;
}