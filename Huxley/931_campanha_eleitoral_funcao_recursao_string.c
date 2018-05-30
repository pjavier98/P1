#include <stdio.h>
#include <ctype.h>
#include <string.h>

void calcular(char nome[20], int quantidade, double cont, int horario)
{
	if (quantidade == 0)
	{
		printf("%.2lf\n", cont);
		
		return;
	}   

	scanf("%s", nome);

	if (strcmp(nome, "internet") == 0)
	{
		cont += 3000;
	}

	else if (strcmp(nome, "revista") == 0)
	{
		cont += 750;
	}

	else if (strcmp(nome, "outdoor") == 0)
	{
		cont += 1500;
	}

	else if (strcmp(nome, "radio") == 0)
	{
		scanf("%s", nome);

		if (strcmp(nome, "fm") == 0)
		{
			cont += 500;
		}

		else
		{
			cont += 300;
		}
	}

	else if (strcmp(nome, "tv") == 0)
	{
		scanf("%d", &horario);

		if (horario > 20)
		{
			cont += 2000;
		}

		else
		{
			cont += 1200;
		}
	}

	calcular(nome, quantidade - 1, cont , horario);
}

void ler(char nome[20])
{	
	int quantidade;

	scanf("%s %d", nome, &quantidade);

	if (strcmp(nome, "FIM") == 0)
	{
		return;
	}
	
	else
	{
	    printf("%s: ", nome);
	}
	
	calcular(nome, quantidade, 0, 0);

	ler(nome);
}

int main()
{
	char nome[20];

	ler(nome);
}