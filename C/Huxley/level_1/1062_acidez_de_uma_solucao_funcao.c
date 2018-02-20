#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void solucao(float ph) {

	if(ph>=1 && ph<7) {
		printf("Acida\n");
	}
	else if(ph>7 && ph<=14) {
		printf("Basica\n");
	}
	else if(ph==7) {
		printf("Neutra\n");
	}
}
int main() {
	float ph;
	scanf("%f",&ph);
	solucao(ph);
	return 0;
}
