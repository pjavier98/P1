#include <stdio.h>

int primeiro_grau(int x) // se colocar void indica que ela nao vai retornar nada
{                         // return vai retornar algo para onde voce chamou a função
  return (x*2+7);         // nessa função ele vai querer um retorno logo tem que colocar int primeiro_grau
}

int main()
{
  int fx = primeiro_grau(7); //nome que quiser fx / fy ...
  printf("f(%d)=%d\n",5,fx);
  return 0;
}
