#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void bissextos(int anoinicial, int anofinal) {
	int ano;
	int year=-1;
	for(ano=anoinicial;ano<=anofinal;ano++) {
		if((ano%4==0) && (ano % 100 != 0) || (ano%400==0)) {
			printf("%d\n",ano);
			year=1;
		}
	}
	if(year==-1) {
		printf("%d\n",year);
	}
}
int main() {
	int anoinicial,anofinal;
	scanf("%d%d",&anoinicial,&anofinal);
	bissextos(anoinicial,anofinal);
	return 0;
}