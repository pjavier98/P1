#include <stdio.h>

int main()
{
	int lado1,lado2,lado3;
	scanf("%d%d%d",&lado1,&lado2,&lado3);

	if(lado1 == lado2 && lado2 == lado3)
	{
		printf("equilatero\n");
	}
	else if(lado1 != lado2 && lado2 != lado3 && lado1 !=lado3)
	{
		printf("escaleno\n");
	}
	else
	{
		printf("isosceles\n");
	}
	
	return 0;
}