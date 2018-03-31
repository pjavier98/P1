#include <stdio.h>

float soma(int num_1, int num_2)
{
	return num_1 + num_2;
}

int main()
{
	int numero_1, numero_2;

	scanf("%d %d", &numero_1, &numero_2);
	
	printf("Digite um numero:\n");  
	
	printf("Digite outro numero:\n");
	
	printf("Soma: %.1f", soma(numero_1, numero_2));

	return 0;
}