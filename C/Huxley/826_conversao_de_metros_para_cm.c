#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double metros;
    
    scanf("%lf", &metros);
    
    printf("Insira um valor em metros:\nResultado: %.1lf", metros * 100);
    
	return 0;
}