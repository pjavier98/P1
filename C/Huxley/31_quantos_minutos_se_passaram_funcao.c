#include <stdio.h>

int minutes (int horas, int min) {
	
	return (horas*60+min);
	
}

int main() {
	int horas, min;
	scanf("%d%d",&horas,&min);

	printf("%d minutos.\n", minutes(horas,min));
}