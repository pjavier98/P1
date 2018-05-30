#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void aumento(double salario) {
	double percentual, valor;
	if(salario<=280) {
		percentual=20;
		valor=salario*0.2;
		salario=salario*1.2;
	} else if (salario>280 && salario<=700) {
		percentual=15;
		valor=salario*0.15;
		salario=salario*1.15;
	} else if (salario>700 && salario<=1500) {
		percentual=10;
		valor=salario*0.10000000000000000999;
		salario=salario*1.1;
	} else {
		percentual=5;
		valor=salario*0.05;
		salario=salario*1.05;
	}
	printf("Percentual de aumento aplicado: %.0lf%\n", percentual);
	printf("Valor do aumento: %.14lf\n", valor);
	printf("Salario com reajuste: %.2lf\n", salario);
}
int main() {
	double salario;
	scanf("%lf",&salario);
	printf("Informe o salario do colaborador:\n");
	printf("Salario antes do reajuste: %.1lf\n", salario);
	aumento(salario);
	
	return 0;
}
