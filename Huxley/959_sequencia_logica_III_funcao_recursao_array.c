#include <stdio.h>

void ler(int quebra, int maximo, int soma, int i, int cont)
{
	if (i > maximo)
	{
		return;
	}

	else
	{
	    if (quebra != cont)
        {
            printf(" ");
        }
        
		if (quebra == cont)
		{
			printf("\n");
			
			cont = 0;
		}

		printf("%d", i);
	}

	ler(quebra, maximo, soma, i + soma, cont + 1);
}

int main()
{
	int quebra, maximo, soma;

	scanf("%d %d %d", &quebra, &maximo, &soma);

	ler(quebra, maximo, soma, 1, 0);

	return 0;
}