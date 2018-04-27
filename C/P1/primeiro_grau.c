#include <stdio.h>

void primeiro_grau(int x) // se colocar void indica que ela nao vai retornar nada
{                         // return vai retornar algo para onde voce chamou a função
  printf("f(%d)=%d\n",x,(x*2+7));
}

int main()
{
  
  primeiro_grau(0);
  primeiro_grau(1);
  primeiro_grau(2);
  primeiro_grau(3);
  primeiro_grau(5);
  return 0;
}
