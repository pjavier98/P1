#include <stdio.h>

void ordenar(int *x, int *y) //desse jeito esta dando errado � pra fazer as tres compara��es aqui �?
{	
	int temp;

	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	} 

}

int main()
{
	int  a, b, c, d; //mas ele nao ta lento o valor de c, ta dando um valor aleatorio
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	  	ordenar(&a, &b); 
		ordenar(&a, &c);
		ordenar(&a, &d);
		ordenar(&b, &c);
		ordenar(&b, &d);
		ordenar(&c, &d);


	printf("%d %d %d %d\n", d, c, b, a);

	return 0;
}