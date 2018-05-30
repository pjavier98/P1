#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
double media(int n1, int n2, int n3)
{
	printf("%.2lfe+00\n", n1 + n2 + n3 / 3);
}

int main() 
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);

    media(num1, num2, num3);
    
	return 0;
}