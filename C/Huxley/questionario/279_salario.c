#include <string.h>
#include <math.h>
#include <stdlib.h>

void salario(float *SALARY, int horas, float porhora ) {
	*SALARY = horas * porhora;
}
int main() {
	int NUMBER, horas;
	float SALARY, porhora;
	scanf("%d %d %f",&NUMBER,&horas,&porhora);

	salario(&SALARY,horas,porhora);

	printf("NUMBER = %d\nSALARY = R$ %.2f",NUMBER,SALARY);


	return 0;
}
