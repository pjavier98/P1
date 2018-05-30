#include <stdio.h>

void ler(int num, double media, int cont)
{
	if (scanf("%d", &num) != EOF)
	{
		media += num;

		cont += 1;
	}

	else
	{
		printf("Media = %.1lf\n", media / cont);
		return;
	}

	ler(num, media, cont);
}

int main()
{
	int num;

	ler(num, 0, 0);
}