#include <stdio.h>

int main()
{
	int comprimento, pedagio, preco_km, preco_pedagio;

	scanf("%d %d %d %d", &comprimento, &pedagio, &preco_km, &preco_pedagio);

	printf("%d\n", (comprimento / pedagio * preco_pedagio) + (comprimento * preco_km));
	
	return 0;
}