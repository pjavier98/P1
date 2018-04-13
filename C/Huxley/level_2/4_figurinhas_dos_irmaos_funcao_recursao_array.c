#include <stdio.h>
#include <stdlib.h>
void compare(int quant_fig, int fig[], int cont_par, int cont_impar, int i, int cont_soma_par, int cont_soma_impar)
{
	if (i == quant_fig)
	{
		printf("%d\n", cont_par);

		printf("%d\n", cont_impar);

		if (cont_soma_par > cont_soma_impar)
		{
			printf("%d\n", cont_soma_par);
		}

		else
		{
			printf("%d\n", cont_soma_impar);
		}

		return;
	}

	if (fig[i] % 2 == 0)
	{
		cont_soma_par += fig[i];
		cont_par += 1;
	}

	else
	{
		cont_soma_impar += fig[i];
		cont_impar += 1;
	}

	compare(quant_fig, fig, cont_par, cont_impar, i + 1, cont_soma_par, cont_soma_impar);
}

void leitura(int figurinhas[], int quant_fig, int i)
{
	if (i == quant_fig)
	{
		return;
	}

	else
	{
		scanf("%d", &figurinhas[i]);
	}

	leitura(figurinhas, quant_fig, i + 1);
}

int main()
{
    int quantidade_fig;
    
    scanf("%d", &quantidade_fig);
    
	int *figurinhas = malloc(quantidade_fig * sizeof(int));

	leitura(figurinhas, quantidade_fig, 0);
	
	compare(quantidade_fig, figurinhas, 0, 0, 0, 0, 0);

	return 0;
}