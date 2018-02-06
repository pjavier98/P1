#include <stdio.h>

void f5()
{
  printf("   *#\n");
}
void f4()
{
  printf("   *##\n");
  f5();
}
void f3()
{
    printf("#  *###\n");
    f4();
}
void f2()
{
    printf("########\n");
    f3();
}

void f1()
{
  printf("#  *###\n");
  f2();
}
void f0()
{
  printf("   *##\n");
  f1();
}
int main()
{
  printf("   *#\n");
  f0();
  return 0;
}
