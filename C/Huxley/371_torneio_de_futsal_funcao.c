#include <stdio.h>
void calculo(float valor, float primeiro, float segundo, float terceiro)
{
	printf("%.2f\n", valor * 0.6);

	printf("%.2f\n", valor * 0.3);

	printf("%.2f", valor * 0.1);
}

int main()
{
	float valor;
	
	float primeiro, segundo, terceiro;

	scanf("%f", &valor);

	calculo(valor, primeiro, segundo, terceiro);

	return 0;
}