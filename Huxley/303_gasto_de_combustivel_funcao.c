#include <stdio.h>

void combustivel(double tempo, double velocidade)
{
	printf("%.3lf\n", velocidade * tempo / 12);
}

int main()
{
	int tempo, velocidade;

	scanf("%d %d", &tempo, &velocidade);

	combustivel(tempo, velocidade);

	return 0;
}