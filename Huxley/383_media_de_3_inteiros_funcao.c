#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int num1, num2, num3;
    
    double media;
    
    scanf("%d\n%d\n%d", &num1, &num2, &num3);

    media = (num1 + num2 + num3);
    
    printf("%.2e\n", media / 3);

	return 0;
}