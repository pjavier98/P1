#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float bombons(int avela, int caramelo, int passas, int preco_a, int preco_c, int preco_p) {
	return (avela*preco_a + caramelo*preco_c + passas * preco_p);
}
int main() {
	int avela, caramelo, passas, preco_a, preco_c, preco_p;
	scanf("%d%d%d%d%d%d",&avela, &caramelo, &passas, &preco_a, &preco_c, &preco_p);
	printf("Valor: R$%.2f\n",bombons(avela, caramelo, passas, preco_a, preco_c, preco_p));
	return 0;
}