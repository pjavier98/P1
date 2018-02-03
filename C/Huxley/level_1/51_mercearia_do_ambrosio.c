#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cod,quant;
    float compra;
    scanf("%d\n%d",&cod,&quant);

    if(cod==1)
        {
            compra=quant*5.30;
        }
    else if(cod==2)
        {
            compra=quant*6.00;
        }
    else if(cod==3)
        {
            compra=quant*3.20;
        }
    else if(cod==4)
        {
            compra=quant*2.50;
        }

    if(quant>=15 || compra>=40)
    {
        printf("R$ %.2f",0.85*compra);
    }
    else
    {
        printf("R$ %.2f",compra);
    }

    return 0;
}
