#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int consumo,preco;
    scanf("%d",&consumo);
    if (consumo<=10)
    {
        preco=7;
    }
    else if(consumo>10 && consumo<=30)
    {
        preco=7+(1*consumo-10);
    }
    else if(consumo>30 && consumo<=100)
    {
         preco=27+(2*(consumo-30));
    }
    else if(consumo>100)
    {
        preco=167+(5*(consumo-100));
    }
    printf("%d",preco);
	return 0;
}
