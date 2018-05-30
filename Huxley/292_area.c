#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double lado_a, lado_b, lado_c;
    scanf("%lf %lf %lf", &lado_a, &lado_b, &lado_c);
    
    printf("TRIANGULO: %.3lf\n", (lado_a * lado_c) / 2);
    printf("CIRCULO: %.3lf\n", lado_c * lado_c * 3.14159);
    printf("TRAPEZIO: %.3lf\n", ((lado_a + lado_b) * lado_c) / 2);
    printf("QUADRADO: %.3lf\n", lado_b * lado_b);
    printf("RETANGULO: %.3lf\n", lado_a * lado_b);
    
	return 0;
}
