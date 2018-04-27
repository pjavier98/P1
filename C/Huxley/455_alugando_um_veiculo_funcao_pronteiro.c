#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void custo(float dias,float kilometros,float *preco) {
	*preco = dias*90;
	if (kilometros/dias > 100) {
	*preco = dias*90 + (kilometros - dias*100)*12;
	}
}
int main() {
	int dias,kilometros;
	float preco;
	scanf("%d\n%d",&dias, &kilometros);
	custo(dias,kilometros,&preco);
	printf("%.2f\n",preco);

	return 0;
}