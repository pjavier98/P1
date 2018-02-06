#include <stdio.h>
#include <math.h>
int raiz_de_25()
{
  printf("A raiz quadrada de 25 é: %d\n",(int) sqrt(25));
}
int raiz_de_9()
{
  printf("A raiz quadrada de 9 é: %d\n",(int) sqrt(9));
  raiz_de_25();
}
int raiz_de_4()
{

  printf("A raiz quadrada de 4 é: %d\n",(int) sqrt(4));
  raiz_de_9();

}
int main ()
{
  raiz_de_4();
  return 0;
}
