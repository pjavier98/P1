#include <stdio.h>

void resposta(int num)
{
	if (num > 1 && num < 10)
	{
	    printf("%d ", num);
		return;
	}

	resposta(num / 10);
	
	printf("%d ", num % 10);
}

int main()
{
	int num;

	scanf("%d", &num);

	resposta(num);
}