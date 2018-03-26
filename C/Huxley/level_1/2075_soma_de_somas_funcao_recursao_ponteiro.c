#include <stdio.h>
#include <math.h>

double somatorio(int m, int j, double temp)
{
	if (m < j)
	{
		return temp;
	}

	else
	{
		temp += sin(j) + cos(j);
	}

	somatorio(m, j + 1, temp);
}

void calcular(int n, int m, int i, int j, double cont, double *temp) 
{
	if (n < i)
	{
		return;
	}

	else
	{
		j = i;

		*temp += somatorio(m, j, cont);
	}

	calcular(n, m, i + 1, j, cont, temp);
}

int main()
{
	int num_n, num_i;

	int num_m, num_j;

	double contador, temporal;

	num_i = 0;

	temporal = 0;

	contador = 0;

	scanf("%d %d", &num_n, &num_m);

	calcular(num_n, num_m, num_i, num_j, contador, &temporal);

	printf("%.6lf\n", temporal);

	return 0;
}