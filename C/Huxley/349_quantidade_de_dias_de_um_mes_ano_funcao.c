#include <stdio.h>

void dias(int mes, int ano)
{
	if (mes == 2)
	{
		if(( ano % 4 == 0 ) && (ano % 100 != 0) || (ano % 400 == 0))
		{
			printf("29");
		}

		else
		{
			printf("28");
		}
	}

	else if (mes == 1 || mes == 3 || mes == 5  || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		printf("31");
	}

	else
	{
		printf("30");
	}
}

int main()
{
	int mes, ano;

	scanf("%d %d", &mes, &ano);

	dias(mes, ano);

	return 0;
}