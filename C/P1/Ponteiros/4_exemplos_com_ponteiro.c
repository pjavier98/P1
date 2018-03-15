#include <stdio.h>

int main()
{
	int x = 10;
	
	int *ponteiro;
	ponteiro = &x; // acessou o endereço de memoria de x

	int y = 20;
	*ponteiro = y; // esse ponteiro apontou no endereço de memoria de x e falou que seu valor ia ser == y

	printf("%d\n%d\n", x, y); // x == 20 , y == 20
	
	return 0;
}