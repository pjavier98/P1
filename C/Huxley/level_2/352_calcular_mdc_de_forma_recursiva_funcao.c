#include <stdio.h>
int fator(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1; 
	}
	else
	{
		fator(num1 = num2, num1 % num2);
	}
}

int main()
{	
	int num1, num2;
	scanf("%d %d", &num1, &num2);
    
    printf("%d",fator(num1, num2));
	return 0;
}