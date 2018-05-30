#include <stdio.h>
#include <stdlib.h>

void comparacao(int tocas[], int nulo[], int i)
{
	if (nulo[i] == 1)
	{
		return;
	}

	nulo[i] = 1;

	comparacao(tocas, nulo, tocas[i]);
	/*tocas[i] -- passa o valor da posicao*/
	/*vai comparando ate achar algum outro numero que ja tenha verificado dai ele conta uma toca*/
}

void quantidade_tocas(int quant, int tocas[], int nulo[], int i, int *cont)
{
	if (quant == i)
	{
		return;
	}

	if (nulo[i] == 0)
	{
		comparacao(tocas, nulo, i);

		*cont += 1;

		return quantidade_tocas(quant, tocas, nulo, i + 1, cont);
	}

	quantidade_tocas(quant, tocas, nulo, i + 1, cont);
}

void ler(int quant, int tocas[], int i)
{	
	if (quant == i)
	{
		return;
	}

	scanf("%d", &tocas[i]);
    
	ler(quant, tocas, i + 1);
}

int main()
{
	int quantidade;

	scanf("%d", &quantidade);

	int *tocas = malloc(quantidade * sizeof(int));

    int nulo[10000] = {0};

    int contador = 0;

	ler(quantidade, tocas, 0);

	quantidade_tocas(quantidade, tocas, nulo, 0, &contador);
	
	printf("%d\n", contador);

	return 0;
}