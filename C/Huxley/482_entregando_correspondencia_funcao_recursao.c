#include <stdio.h>

void ler(int entregas, int meta, int media, int i)
{
	if (i == 0)
	{	
		printf("%d\n%d", meta, media / 7);
		return;
	}

	scanf("%d", &entregas);

	if (entregas >= 100)
	{
		meta += 1;
	}

	media += entregas;

	ler(entregas, meta, media, i - 1);
}

int main()
{
	int entregas;
	int i = 7;

	ler(entregas, 0, 0, i);

	return 0;
}