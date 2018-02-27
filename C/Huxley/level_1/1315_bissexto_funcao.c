#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int bissexto(int ano) {
	if(ano%4==0 && ano%100!=0 || ano%400==0) {
		printf("Bissexto\n");
	} else {
		printf("Nao bissexto\n");
	}
}
int main() {
	int ano;
	scanf("%d",&ano);
	bissexto(ano);
	return 0;
}