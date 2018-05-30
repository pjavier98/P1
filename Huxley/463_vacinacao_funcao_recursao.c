#include <stdio.h>

void ler(int idade, int sarampo, int hepatite, int ambas)
{
	scanf("%d", &idade);

	if (idade == 100)
	{
		printf("%d\n%d\n%d\n", sarampo, hepatite, ambas);
		return;
	}

	if (idade >= 3 && idade <= 6)
	{
		sarampo += 1;
	}

	if (idade >= 5 && idade <= 8)
	{
		hepatite += 1;
	}

	if (idade >= 5 && idade <= 6)
	{
		ambas += 1;
	}

	ler(idade, sarampo, hepatite, ambas);
}

int main()
{
	int idade;

	ler(idade, 0, 0, 0);

	return 0;
}