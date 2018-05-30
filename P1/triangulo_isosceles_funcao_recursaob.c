#include <stdio.h>

void decrescente(int temp)
{
	if (temp == 0)
	{
		return;
	}

	else
	{
		printf("*");
	}

	decrescente(temp - 1);
}

void crescente(int cont)
{
	if (cont == 0)
	{
		return;
	}

	else
	{
		printf("*");
	}

	crescente(cont - 1);
}

void altura(int raio, int cont, int temp)
{
	if (cont > raio)
	{
		if (temp != 0)
		{
			decrescente(temp);
			
			printf("\n");

		    altura(raio, cont, temp - 1);
		}

		return;
	}

	else
	{
		crescente(cont);
	}

	printf("\n");
	
	altura(raio, cont + 1, temp);
}

int main()
{
	int raio, cont, temp;

	scanf("%d", &raio);
    
    cont = 1;
    
    temp = raio - 1;
    
	altura(raio, cont, temp);

	return 0;
}