#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void raiz(int quadrado) {
    int num1,num2;
    while (quadrado >= 1000 && quadrado <= 9999) {
        num1 = quadrado % 100;
        num2 = sqrt(quadrado) - num1;
        if(quadrado == (num1 + num2) * (num1 + num2)) {
            printf("propriedade do 3025!\n");
        }
        else {
            printf("numero comum\n");
        }
        scanf("%d",&quadrado);
    }
    
}
int main() {
    int quadrado,num1,num2;
    
    scanf("%d",&quadrado);
    
    raiz(quadrado);
    
    return 0;
}