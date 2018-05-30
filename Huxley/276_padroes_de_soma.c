#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long double num1, num2;
    
    scanf("%Lf %Lf", &num1, &num2);
    
    printf("%.Lf", (((num1 + num2) * (num2 - num1 + 1)) / 2));
    
	return 0;
}