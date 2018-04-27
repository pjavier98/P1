#include <stdio.h>
#include <math.h>

int expo(int number, int expo) //esta lendo os numeros inteiros colocados na funcao main
{
  printf("A potencia de %d à %d é: %.0f\n",number,expo, pow(number,expo)); // sqrt - raiz
}

int main()
{
  expo(3,2); // (x,y) -> x - base || y - expoente
  expo(2,5); // colocar o numero de potencias que se queira calcular


  return 0;
}
