#include <stdio.h>

void anos(int dias)
{
	printf("%d ano(s)\n", dias / 365);

	printf("%d mes(es)\n", (dias % 365) / 30);

	printf("%d dia(s)\n", (dias % 365) % 30);
}

int main()
{
	int dias;

	scanf("%d", &dias);

	anos(dias);

	return 0;
}