#include <stdio.h>

int contador_algarismos(int quantidade, int count)
{

	if(quantidade <= 0)
	{
		return count;
	}
	
	return contador_algarismos(quantidade / 10, count + 1);
}

int main()
{
	int algarismos, count;

	count = 0;

	scanf("%d", &algarismos);

	if(algarismos == 0)
	{
		printf("1\n");
	}
	
	else
	{
	printf("%d\n", contador_algarismos(algarismos, count));
	}
}