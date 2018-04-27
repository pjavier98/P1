#include <stdio.h>

int main()
{
  int a,b,c,d,e,f,g;
  scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);

  printf("%d\n",4*(a+b+c+d+e+f+g));
  if(4*(a+b+c+d+e+f+g)%30!=0)
  {
      printf("%d\n",(4*(a+b+c+d+e+f+g)/30)+1);
  }
  else
  {
      printf("%d\n",(4*(a+b+c+d+e+f+g)/30));
  }
  return 0;
}
