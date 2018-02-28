#include <stdio.h>
float emprestimo(float salario, float comprometido) {
	if(comprometido/salario<=0.3) {
		return salario*0.3-comprometido;
	}
	else {
		return;
	}
}

int main() {
	float salario, comprometido;
	scanf("%f%f",&salario,&comprometido);
	printf("%.2f\n",emprestimo(salario,comprometido));
	return 0;
}