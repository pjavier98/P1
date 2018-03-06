#include <stdio.h>

void invertido(int num1, int num2)
{
    int resto;
	while (num1 <= num2)
	{
		resto = num1 / 10;
		if (num1 % 10 != 0)
		{
            if (num1 % resto == 0) 
			{
				printf("%d\n",num1);
			}
		}

		num1++;
	}
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	invertido(num1,num2);
	
	return 0;
}