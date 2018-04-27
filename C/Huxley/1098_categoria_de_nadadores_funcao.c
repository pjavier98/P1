//Infantil A: [5; 7]
//Infantil B: [8; 10]
//Juvenil A: [11;13]
//Juvenil B: [14;17]
//Adulto: [18;40]
//Master: A partir de 41 e sem limite superior

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nadadores(int idade) {
	if(idade>=41) {
		printf("Master\n");
	}
	else if(idade>=18) {
		printf("Adulto\n");
	}
	else if(idade>=14) {
		printf("Juvenil B\n");
	}
	else if(idade>=11) {
		printf("Juvenil A\n");
	}
	else if(idade>=8) {
		printf("Infantil B\n");
	}
	else if(idade>=5) {
		printf("Infantil A\n");
	}
	else {
		printf("Idade invalida.\n");
	}
}
int main() {
	int idade;
	scanf("%d",&idade);
	nadadores(idade);
	return 0;
}