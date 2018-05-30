#include <stdio.h>

int contador_algarismos(int quantidade)
{

	if(quantidade >= 0 && quantidade <=9)
	{
		return 1;
	}
	
	return 1 + contador_algarismos(quantidade / 10);
}

int main()
{
	int algarismos;

	scanf("%d", &algarismos);

	printf("%d\n", contador_algarismos(algarismos));
	
}