#include <stdio.h>

int mdc(int num1, int num2)
{
	int temp;

	if (num2 == 0)
	{
		return;
	}
	else
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	return num1;
}

int mmc(int num1, int num2)
{
    int aux = mdc(num1, num2);
    
    return num1 * num2 / aux;
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("%d", mmc(num1,num2));

	return 0;
}