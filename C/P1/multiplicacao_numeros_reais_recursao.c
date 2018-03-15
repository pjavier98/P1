#include <stdio.h>

float multiplicacao(float n1, float n2)
{
	
	if(n2 == 0)
	{
		return 0;
	}
	
	if (n2 <= 1)
	{
		return n1 * n2 + multiplicacao(n1, n2 - n2);
	}
	
	return n1 + multiplicacao(n1, n2 - 1);
	
}

int main()
{
	float num1, num2;

	scanf("%f %f", &num1, &num2);

	printf("%.2f", multiplicacao(num1, num2));
}