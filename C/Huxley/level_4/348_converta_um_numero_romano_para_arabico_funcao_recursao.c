#include <stdio.h>

void romanos(char type, int *cont)
{
	if (scanf("%c", &type) != EOF)
	{
		if (type = 'M')
		{
			cont += 1000;
		}
	}
}

int main()
{
	char type;

	int contador;

	scanf("%c", &type);

	romanos(type, &contador);

	printf("%d\n", contador);

	return 0;
}