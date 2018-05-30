#include <stdio.h>

void ler(char falha[10], int i)
{
	if (i == 10)
	{	
		if (falha[6] == 'b')
		{
			printf("Bulbassauro\n");
		}

		else if (falha[6] == 'c')
		{
			printf("Charmander\n");
		}

		else if (falha[6] == 's')
		{
			printf("Squirtle\n");
		}

		else
		{
			printf("Codigo Invalido\n");
		}

		return;
	}

	scanf("%c", &falha[i]);

	ler(falha, i + 1);
}

int main()
{
	char falha[10];

	ler(falha, 0);

	return 0;
}