#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void comparar(int j, int x[10000])
{
    
    if (x[j + 1] == 0)
    {
        printf("EM ORDEM");
        return;
    }
    
    else if (x[j] > x[j + 1])
    {
        printf("FORA DE ORDEM");
        return;
    }
    
    comparar(j + 1, x);
}

void ler(int i, int x[10000])
{
    scanf("%d", &x[i]);
    //printf("%d\n", x[i]);
    
    if (x[i] == 0)
    {
        return;
    }
    
    ler(i + 1, x);
}

int main() 
{
    int x[10000];
    int i;
    int j = 0;
    
    for (i = 0; i < 10000; i += 1)
    {
        x[i] = -9999;    
    }
    
    ler(0, x);
    
    comparar(0, x);
    
	return 0;
}