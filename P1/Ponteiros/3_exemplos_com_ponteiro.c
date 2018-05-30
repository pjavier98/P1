#include <stdio.h>

int main()
{
	int x = 10;
	
	int y = x;

	x = 20;

	printf("%d\n%d\n", x, y); // x == 20 , y == 10
	
	return 0;
}