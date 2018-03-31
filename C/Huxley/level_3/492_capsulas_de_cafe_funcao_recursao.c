#include <stdio.h>
void cafe(int *cont, int *temp, int quant)
{
	int num;

	char type;

	if (quant == 0)
	{
		return;
	}

	scanf("%d %c", &num, &type);
	
	if (type == 'p' || type == 'P')
	{
	    *cont += num * 10;
	}
	else if (type == 'g' || type == 'G')
	{
	    *temp += num * 16;
	}

	cafe(cont, temp, quant - 1);
}

int main()
{
	int contador, temporal, quant;

	contador = 0;

	temporal = 0;

	quant = 7;

	cafe(&contador, &temporal, quant);
	
	printf("%d\n%d", contador + temporal, (2 * (contador + temporal) / 7));
	
	//cada capsula dois xicaras 7 professores

	return 0;
}