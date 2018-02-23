#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void comparar(float raio_a, float raio_b) {
	if (raio_a>raio_b) {
		printf("Primeiro circulo\n");
	} else if(raio_b>raio_a) {
		printf("Segundo circulo\n");
	} else {
		printf("Iguais\n");
	}
}
int main() {
	float raio_a, raio_b;
	scanf("%f\n%f",&raio_a,&raio_b);
	comparar(raio_a,raio_b);
	return 0;
}