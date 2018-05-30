    /*o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.*/

/*a) salários até R$ 280,00 (incluindo) : aumento de 20%
b)salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
c)salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
d)salários de R$ 1500,00 em diante : aumento de 5% */

#include <stdio.h>
float reajuste(float salario) {
	float aumento;
	if(salario >= 1500) {
		aumento = 5;
	}
	else if(salario > 700) {
		aumento = 10;
	}
	else if(salario > 280) {
		aumento = 15;
	}
	else if(salario>0) {
		aumento = 20;
	}
	printf("%.2f\n%.0f\n%.2f\n%.2f\n",salario,aumento,salario*(aumento/100),salario+salario*(aumento/100));
}

int main () {
	float salario;
	scanf("%f", &salario);
	reajuste(salario);
}