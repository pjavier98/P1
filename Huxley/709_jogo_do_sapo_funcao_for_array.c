#include <stdio.h>

void move(int casas, int *posicao, int dado) // usar ponteiro ou retornar 
{
	*posicao += dado;

	if (*posicao >= casas)
	{
		*posicao %= casas;
	}
    
	while (*posicao < 0)
	{
		*posicao += casas;
	}
}

void zerar(int jogadores, int posicao[jogadores], int i)
{
    if (i == jogadores)
    {
        return;
    }
    
    posicao[i] = 0;
   
    zerar(jogadores, posicao, i + 1);
}

int main()
{
	int casas, jogadores, rodadas, dado;
	
	scanf("%d %d %d", &casas, &jogadores, &rodadas);
	
	int i = 0;
	int j = 0;
	
	int array_casas[casas];
	
	int posicao[jogadores];
	
	zerar(jogadores, posicao, 0);  // zerei pq tinha lixo de memoria
	
    for (i = 0; i < casas; i += 1)
	{
		scanf("%d", &array_casas[i]);
	}
    
    for (i = 0; i < rodadas; i += 1)
    {
    	for (j = 0; j < jogadores; j += 1)
    	{
        	scanf("%d", &dado);
        	
        	move(casas, &posicao[j], dado);

        	move(casas, &posicao[j], array_casas[posicao[j]]);
        }
    }


    for (j = 0; j < jogadores; j += 1)
    {
    	printf("%d\n", posicao[j]);
    }

	return 0;
}