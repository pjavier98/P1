#include <stdio.h>

void ordenar(int *a, int *b) //desse jeito esta dando errado é pra fazer as tres comparações aqui é?
{	
	int temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	} 

}

int main()
{
	int  a, b, c; //mas ele nao ta lento o valor de c, ta dando um valor aleatorio
	scanf("%d %d %d", &a, &b, &c);
	
	  	ordenar(&a, &c); 
		ordenar(&b, &c);
		ordenar(&a, &b);


	printf("%d %d %d\n", a, b, c);

	return 0;
}