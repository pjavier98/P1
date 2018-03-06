#include <stdio.h>
int quadrado(int lado1, int lado2, int laje)
{
  int altura = 0, largura = 0;
  
  if (lado1 % laje == 0) 
  {
    largura = (lado1 / laje);
  } 
  
  else 
  {
    largura = ((lado1 / laje) + 1);
  }
  
  if(lado2 % laje == 0) 
  { 
    altura = (lado2 / laje);
  }
  
  else 
  {
    altura = ((lado2 / laje) + 1);
  }
  
  return altura * largura;
}

int main() 
{
  int lado1, lado2, laje;
  
  scanf("%d %d %d", &lado1, &lado2, &laje);
  
  printf("%d",quadrado(lado1, lado2, laje));
}
