#include <stdio.h>
#include <math.h>

void raiz(int number) //esta lendo os numeros inteiros colocados na funcao main
{
  printf("A raiz de %d = %.0f\n",number, sqrt(number)); // sqrt - raiz
}

int main()
{
  raiz(25);
  raiz(49);
  raiz(144);  // pode colocar quantas raizes quiser
  return 0;
}