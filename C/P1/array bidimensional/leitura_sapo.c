#include <stdio.h>

void ler(int quant_casas, int casas[quant_casas], int quant_jogadas, int jogadas[quant_jogadas], int i, int j)
{
	if (quant_jogadas == j)
	{
		return;
	}

	else
	{
		if (quant_casas == i)
		{
			scanf("%d", &jogadas[j]);
			
			return ler(quant_casas, casas, quant_jogadas, jogadas, i, j + 1);
		}

		scanf("%d", &casas[i]);
		
		return ler(quant_casas, casas, quant_jogadas, jogadas, i + 1, j);
	}
}

int main()
{
	int quant_casas, quant_jogadores, rodadas;
	
	scanf("%d %d %d", &quant_casas, &quant_jogadores, &rodadas);
	
	int quant_jogadas = quant_jogadores * rodadas;
	
	int casas[quant_casas];
	int jogadores[quant_jogadores] = {0};
	int jogadas[quant_jogadas];

	ler(quant_casas, casas, quant_jogadas, jogadas, 0, 0);

	return;
}