#include <stdio.h>
#include <stdlib.h>

void repetir(int fig[], int i, int j)
{
	if (i == j)
	{
		return fig[i];
	}

	if (fig[i] == fig [j])
	{
		return 0;
	}

	repetir(fig, i, j + 1);
}

void comparar(int fig[], int quant, int i, int cont_par, int soma_par, int cont_impar
	, int soma_impar)
{
	if (quant == i)
	{
	    printf("%d\n%d\n", cont_par, cont_impar);
	    
	    if (soma_par > soma_impar)
	    {
	    	printf("%d\n", soma_par);
	    }

	    else
	    {
	    	printf("%d\n", soma_impar);
	    }
		return;
	}

	if (fig[i] % 2 == 0)
	{
		cont_par += 1;
		
		soma_par += repetir(fig, i, 0);
	}

	if (fig[i] % 2 != 0)
	{
		cont_impar += 1;
		
		soma_impar += repetir(fig, i, 0);
	}

	
	comparar(fig, quant, i + 1, cont_par, soma_par, cont_impar, soma_impar);
}

void leitura(int figurinhas[], int quant, int i)
{
	if (quant == i)
	{
		return;
	}

	else
	{
		scanf("%d", &figurinhas[i]);
	}

	leitura(figurinhas, quant, i + 1);
}

int main()
{
	int quantidade;

	scanf("%d", &quantidade);

	int *figurinhas = malloc(quantidade * sizeof(int));

	leitura(figurinhas, quantidade, 0);

	comparar(figurinhas, quantidade, 0, 0, 0, 0, 0);

	return 0;
}