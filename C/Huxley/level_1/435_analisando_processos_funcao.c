#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int processo(int min)
{
    return 480 / min;
}

int main() 
{
    int minutos_processo;
    
    scanf("%d", &minutos_processo);
    
    printf("%d", processo(minutos_processo));
    
    return 0;
}