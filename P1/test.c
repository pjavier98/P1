#include <stdio.h>

void ler(char lixo[], char frutas[], int i, int cont)
{
	if (i == 0)
	{
		scanf("%c", &lixo[i]);
		return ler(lixo, frutas, i + 1, cont);
	}

	if (frutas[i] == '\n')
	{
	    printf("%d\n", cont);
		return;
	}

	scanf("%c", &frutas[i]);

	if (frutas[i] == ' ')
	{
		cont += 1;
	}
    
	ler(lixo, frutas, i + 1, cont);
}

int main()
{
	char lixo[1000];

	char frutas[1000];

	ler(lixo, frutas, 0, 1);
}