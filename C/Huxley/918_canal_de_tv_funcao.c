#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int emissora(int canal) {
	if(canal==2) {
		printf("Digite um numero de um canal de tv:\nSBT\n");
	}
	else if(canal==4) {
		printf("Digite um numero de um canal de tv:\nBAND\n");
	}
	else if(canal==6) {
		printf("Digite um numero de um canal de tv:\nREDETV!\n");
	}
	else if(canal==9) {
		printf("Digite um numero de um canal de tv:\nRECORD\n");
	}
	else if(canal==13) {
		printf("Digite um numero de um canal de tv:\nGLOBO\n");
	}
	else {
		printf("Digite um numero de um canal de tv:\nCanal Invalido\n");
	}
}
int main() {
	int canal;
	scanf("%d",&canal);
	emissora(canal);
	return 0;
}