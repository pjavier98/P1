#include <stdio.h>

void ler(int num1, int num2, int i, int cont1, int cont2)
{
	if (i == 0)
	{
		if (cont1 > cont2)
		{
			printf("REINALDO\n");
		}

		else if (cont1 < cont2)
		{
			printf("HELENA\n");
		}

		else
		{
			printf("EMPATE\n");
		}

		return;
	}

	scanf("%d %d", &num1, &num2);

	cont1 += num1;
	cont2 += num2;

	ler(num1, num2, i - 1, cont1, cont2);
}

int main()
{
	int num1, num2;

	int i = 5;

	ler(num1, num2, i, 0, 0);
}