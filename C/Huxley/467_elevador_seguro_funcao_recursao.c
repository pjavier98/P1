#include <stdio.h>

void ler(double peso, double cont, int pessoas)
{
    scanf("%lf", &peso);
    
	if (peso == 0 || cont >= 560 || pessoas == 7)
	{
	    printf("%d\n%.1lf", pessoas, cont);
	    
		return;
	}

	cont += peso;

	pessoas += 1;

	ler(peso, cont, pessoas);
}

int main()
{
	double peso;
    double cont;
    
	ler(peso, 0, 0);

	return 0;
}