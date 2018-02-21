#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void number (float num, float quantidade, int contador) { //quantidade - quantidade de numeros
	while(quantidade<5) {
      scanf("%f",&num);
      
      if(num < 0) {
        contador=contador+1;
      }
      quantidade++;
      printf("Digite um valor:\n");
  }
  printf("Foram digitados %d numeros negativos",contador);
}

int main() {
    float num,quantidade=0;
    int contador=0;

  	number(num,quantidade,contador);
	return 0;
}