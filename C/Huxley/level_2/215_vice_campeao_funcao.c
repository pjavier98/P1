#include <stdio.h>
int ordenacao(int num1, int num2, int num3)
{
	int numx;
	
	if (num1 < num2)
	{
		numx = num1;
		num1 = num2;
		num2 = numx;
	}
	
	if (num1 < num3)
	{
		numx = num1;
		num1 = num3;
		num3 = numx;
	}
	
	if (num2 < num3)
	{
		numx = num2;
		num2 = num3;
		num3 = numx;
	}

	return num2;
}

int main()
{
	int num1, num2, num3;

	scanf("%d %d %d",&num1, &num2, &num3);

	printf("%d", ordenacao(num1, num2, num3));

	return 0;
}