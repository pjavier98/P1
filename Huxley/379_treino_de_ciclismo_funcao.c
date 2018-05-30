#include <stdio.h>
void desempenho(float meta, int dias) {
	int cont;
	for(cont=8;cont>0;cont--) {
		scanf("%f",&meta);
		if(meta>=8) {
			dias++;
		}
	}
	if(dias>=5) {
		printf("Desempenho otimo");
	}
	else if(dias<3) {
		printf("Desempenho ruim");
	}
	else {
		printf("Desempenho razoavel");
	}
}
int main() {
	float meta;
	int dias;
	desempenho(meta,dias);
	return 0;
}
