#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double nota1,nota2;
    scanf("%lf %lf",&nota1,&nota2);
    printf("MEDIA = %.5lf",(nota1*3.5+nota2*7.5)/11); //media ponderada
	return 0;
}
