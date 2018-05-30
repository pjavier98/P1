#include <stdio.h>

int main()
{
	int forca, inteligencia, destreza, furtividade, peso;

	scanf("%d %d %d %d %d", &forca, &inteligencia, &destreza, &furtividade, &peso);

	if (forca < 5)
	{
		printf("Mage\n");
	}

	else
	{
		if (destreza < 5)
		{
			printf("Orc\n");
		}

		else
		{
			if (peso < 5)
			{
				printf("Paladin\n");
			}

			else
			{
				printf("Knight\n");
			}
		}
	}
	
	return 0;
}