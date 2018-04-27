#include <stdio.h>

void ordenar(int *x, int *y)
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
	int  a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	ordenar(&a, &c); /* se fossem 4 numeros iria ser */
	ordenar(&a, &b); /* ab, ac, ad, bc, bd, cd*/
	ordenar(&b, &c);


	printf("%d %d %d\n", a, b, c);

	return 0;
}