#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nota(float nota1, float nota2, float nota3) {
	float media=(nota1+nota2+nota3)/3;
	if(media>=7) {
		printf("Aprovado com media %.1f\n",media);
	} else if(media>=5 && media <7) {
		printf("Recuperacao com media %.1f\n",media);
	}
	else {
		printf("Reprovado com media %.1f\n",media);
	}
}
int main() {
	float nota1,nota2,nota3;
	scanf("%f%f%f",&nota1,&nota2,&nota3);
	printf("Informe a primeira nota:\nInforme a segunda nota:\nInforme a terceira nota:\n");
	nota(nota1,nota2,nota3);
	return 0;
}