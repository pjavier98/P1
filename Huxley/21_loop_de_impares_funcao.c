#include <stdio.h>
void numeros_impares(int num1, int num2)
{
	while(num1 <= num2)
	{
		if (num1 % 2 !=0)
		{
			printf("%d\n", num1);
		}
		num1++;
	}
}

int main() 
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	numeros_impares(num1, num2);

	return 0;
}