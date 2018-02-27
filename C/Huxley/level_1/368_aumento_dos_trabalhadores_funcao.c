#include <stdio.h>
float aumento(float salario) {
	if (salario>500) {
		return (salario*1.1);
	} 
	else if (salario>300) {
		return (salario*1.07);
	}
	else {
		return (salario*1.05);
	}
}
int main() {
	float salario;
	scanf("%f",&salario);
	printf("%.2f",aumento(salario));
	return 0;
}

