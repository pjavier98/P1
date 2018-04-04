#include <stdio.h>

int muralha(int quant, int cont, int moeda, int pos)
{
	char type;

	scanf("%c ", &type);

	if (quant < 0)
	{
		return moeda;
	}
	
	if (type == 'C') // cima
	{    
		cont += 1;
		if (pos == 0)
		{
			pos = 1;
		}
	}

	if (type == 'D') // baixo
	{
		cont -= 1; 

		if (pos == 0)
		{
			pos = -1;
		}
	}


	if (cont < 0 && pos == 1)
	{
		moeda += 1;

		pos = -1;
	}

	if (cont > 0 && pos == -1)
	{
		moeda += 1;

		pos = 1;
	}

	muralha(quant - 1, cont, moeda, pos);
}

int main()
{
	int quantidade;

	scanf("%d", &quantidade);

	printf("%d", muralha(quantidade, 0, 0, 0));

	return 0;
}