#include <stdio.h>

void funcaox(int X,int *num_x, int *num_y)
{
  *num_x = 2*X+7;
  *num_y = 9*X+13;
}
int main()
{
  int X=0,num_x,num_y;
  funcaox(X,&num_x,&num_y);

  printf("A função primeiro_grau calculou f(%d) = %d e g(%d) = %d",X,num_x,X,num_y);

  return 0;
}
