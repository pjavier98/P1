#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int presentes()
{
    int mulheres, homens;
    
    double total, medio;
    
    scanf("%d %d", &mulheres, &homens);
    
    total = mulheres * 10 + homens * 8.5;
    
    medio = total / (homens + mulheres);
    
    printf("%.2lf\n%.2lf",total, medio);
    
}

int main() 
{
    presentes();
	return 0;
}