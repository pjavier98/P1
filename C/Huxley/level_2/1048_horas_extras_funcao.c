#include <stdio.h>

void total(double sal, int extra)
{
	double sal_ex = sal * (0.1 * extra / 4);

	printf("%.2lf\n", sal + sal_ex);
}

int main()
{
	double salario;
	
	int horas_extras;

	scanf("%lf %d", &salario, &horas_extras);

	total(salario, horas_extras);

	return 0;
}