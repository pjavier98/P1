#include <stdio.h>
int descontos(float orig, float prom, int cont, int stop)
{
	
	scanf("%f %f", &orig, &prom);
	
	if (stop == 0)
	{
		return cont;
	}

	if (orig * 0.8 >= prom)
	{
		cont += 1;
	}
    
    descontos(orig, prom, cont, stop - 1);
}

int main()
{
	float original, promocao;
	
	int contador, parada;
	
	parada = 5;

	printf("%d", descontos(original, promocao, contador, parada));

	return 0;
}