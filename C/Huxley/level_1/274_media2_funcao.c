#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double nota1,nota2,nota3;
    scanf("%lf %lf %lf",&nota1,&nota2,&nota3);
    printf("MEDIA = %.1lf",(nota1*2+nota2*3+nota3*5)/10);
	return 0;
}
