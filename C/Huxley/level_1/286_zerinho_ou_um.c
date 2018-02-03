#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,ganhador;   //a-alice-0 / b-beto-1 / c-clara-2 / empate-3
    scanf("%d %d %d",&a,&b,&c);
    if (a!=b && a!=c)
    {
        printf("A\n");
    }
    else if(b!=a && b!=c)
    {
        printf("B\n");
    }
    else if(c!=a && c!=b)
    {
        printf("C\n");
    }
    else
    {
        printf("*\n");
    }

	return 0;
}
