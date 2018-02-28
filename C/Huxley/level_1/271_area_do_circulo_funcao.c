#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double area(double raio) {
	return ((raio/100)*(raio/100)*3.14159); //divide por 10000 porque a saida é em centimetros
}
int main() {
	double raio;
	scanf("%lf",&raio);

	printf("Area = %.4lf\n",area(raio));
	return 0;
}