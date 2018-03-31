#include <stdio.h>

int mdc(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1;
	}

	mdc(num1 = num2, num1 % num2);
}	

int main()
{
	int numero1, numero2;

	scanf("%d %d", &numero1, &numero2);

	printf("%d\n", mdc(numero1, numero2));

	return 0;
}