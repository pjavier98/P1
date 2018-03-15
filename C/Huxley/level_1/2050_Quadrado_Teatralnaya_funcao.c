#include <stdio.h>
int quadrado(int lado, int laje)
{
  int altura = 0, largura = 0;
  
  if (lado % laje == 0) 
  {
    return (lado / laje);
  } 
  
  else 
  {
    return ((lado / laje) + 1);
  }
  
}

int main() 
{
  int lado1, lado2, laje;
  
  scanf("%d %d %d", &lado1, &lado2, &laje);
  

  int qLado1 = quadrado(lado1, laje);

  int qLado2 = quadrado(lado2, laje);

  printf("%d", qLado1 * qLado2);
}