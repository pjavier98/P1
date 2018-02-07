#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int num;
    scanf("%ld",&num);
    if(num>0)
    {
        if(num%2==0)
        {
            printf("POSITIVO PAR\n");
        }
        else if(num%2!=0)
        {
            printf("POSITIVO IMPAR\n");
        }
    }
    else if(num<0)
    {
        if(num%2==0)
        {
             printf("NEGATIVO PAR\n");
        }
        else if(num%2!=0)
        {
             printf("NEGATIVO IMPAR\n");
        }
    }
    else
    {
        printf("NULO\n");
    }
	return 0;
}
