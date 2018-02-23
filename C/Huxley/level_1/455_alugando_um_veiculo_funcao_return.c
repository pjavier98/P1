#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float custo(float dias,float kilometros) {
	
	if (kilometros/dias > 100) {
		return dias*90 + (kilometros - dias*100)*12;
	}
	return dias*90;
}
int main() {
	int dias,kilometros;
	scanf("%d\n%d",&dias, &kilometros);
	
	printf("%.2f\n",custo(dias,kilometros));
	return 0;
}