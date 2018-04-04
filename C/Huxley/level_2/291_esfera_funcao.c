#include <stdio.h>

void esfera(double r)
{
	printf("VOLUME = %.3lf", (4 * 3.14159 * (r * r * r)) / 3); // formula do volume da esfera
}

int main()
{
	int raio;

	scanf("%d", &raio);

	esfera(raio);
}