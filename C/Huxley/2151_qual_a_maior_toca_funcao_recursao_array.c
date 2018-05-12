#include <stdio.h>

void comparacao(int tocas[], int nulo[], int i, int cont, int *maior)
{
	if (nulo[i] == 1)
	{   
	    if (*maior < cont)
	    {
	        *maior = cont;
	    }
	    
		return;
	}
    
    cont += 1;
    
	nulo[i] = 1;

	comparacao(tocas, nulo, tocas[i], cont, maior);
	/*tocas[i] -- passa o valor da posicao*/
	/*vai comparando ate achar algum outro numero que ja tenha verificado dai ele conta uma toca*/
}

void quantidade_tocas(int quant, int tocas[], int nulo[], int i, int *cont, int *maior)
{
	if (quant == i)
	{
		return;
	}

	if (nulo[i] == 0)
	{
		comparacao(tocas, nulo, i, 0, maior);

		*cont += 1;

		return quantidade_tocas(quant, tocas, nulo, i + 1, cont, maior);
	}

	quantidade_tocas(quant, tocas, nulo, i + 1, cont, maior);
}


int main()
{
	int quant, i;

	scanf("%d", &quant);
	//printf("%d\n", quant);
	
	int tocas[quant];

	for(i = 0; i < quant; i += 1)
	{
		scanf("%d", & tocas[i]);
		//printf(" %d", tocas[i]);
	}
    
    int nulo[quant];
    int maior = 0;
    
    for (i = 0; i < quant; i += 1)
    {
        nulo[i] = 0;
    }
    
    int contador = 0;

	quantidade_tocas(quant, tocas, nulo, 0, &contador, &maior);
	
    printf("%d", maior);
    
	return 0;
}