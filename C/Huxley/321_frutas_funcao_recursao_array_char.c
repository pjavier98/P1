#include <stdio.h>

int conta_frutas(int cont)
{	
	char frutas;

	scanf("%c", &frutas);

	if (frutas == '\0' || frutas == '\n')
	{
		return cont;
	}

	if (frutas == ' ')
	{
		cont += 1;
	}

	conta_frutas(cont);
}

void ler_dinheiro(int testes, int i, double cont_fruit, double cont_money)
{
	if (testes == i)
	{
	    printf("%.2lf kg por dia\n", cont_fruit / testes);
	    
	    printf("R$ %.2lf por dia", cont_money / testes);
		return;
	}
	
	double dinheiro;

	scanf("%lf ", &dinheiro); /* espaco pela quebra de linha */

	char frutas[1000];

	int ac = conta_frutas(1);
	
    cont_fruit += ac;
    
    cont_money += dinheiro;
    
    printf("dia %d: %d kg\n", i + 1, ac);
    
	ler_dinheiro(testes, i + 1, cont_fruit, cont_money);
}

int main()
{
	int testes;
	
	scanf(" %d", &testes);

	ler_dinheiro(testes, 0, 0, 0);

	return 0;
}