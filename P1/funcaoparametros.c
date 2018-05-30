#include <stdio.h>

void primeiro_grau(int x, int *fx, int *fy)
{
	*fx = 3*x+7;
	*fy = 9*x+13; 
}

int main() 
{
	int x = 0 ,fx,fy;
	
	primeiro_grau(x,&fx,&fy);
	printf("A funcao primeiro_grau calculou f(%d) = %d e g(%d) = %d\n", x,fx,x,fy);

	x = 5;
	primeiro_grau(x,&fx,&fy);
	printf("A funcao primeiro_grau calculou f(%d) = %d e g(%d) = %d", x,fx,x,fy);
	
	return 0;

}