#include <stdio.h>
void multiplos_5(int num1, int num2)
{	
	int cont = 0;
	while (num1 <= num2)
	{
		if (num1 % 5 == 0)
		{
			if (cont == 0)
			{
				printf("%d", num1);
				
				cont = 1;
			}

			else
			{
				printf("|%d", num1);
			}
		}
		
		num1++;
	}
}

int main() 
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	multiplos_5(num1, num2);

	return 0;
}