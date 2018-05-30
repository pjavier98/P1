#include <stdio.h>

int primeiro_grau(int x) // se colocar void indica que ela nao vai retornar nada
{                         // return vai retornar algo para onde voce chamou a função
  return (x*2+7);         // nessa função ele vai querer um retorno logo tem que colocar int primeiro_grau
}

int main()
{
  int x;
  scanf("%d",&x );
  printf("f(%d)=%d\n",x,primeiro_grau(x));  // se quiser eu colocar um valor aleatorio
  printf("f(%d)=%d\n",5,primeiro_grau(5));  //sem imprimir nem chamar nenhuma variavel
  printf("f(%d)=%d\n",10,primeiro_grau(10));
  printf("f(%d)=%d\n",15,primeiro_grau(15));
  printf("f(%d)=%d\n",20,primeiro_grau(20));
  return 0;
}
