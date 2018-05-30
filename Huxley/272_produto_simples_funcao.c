#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


long long produto(long long num, long long *cont)
{
	if (scanf("%Ld", &num) != EOF)
	{
		*cont *= num;

		return produto(num, cont);
	}

	else
	{
		return *cont;
	}
}
int main() 
{
	long long numero, cont;

	cont = 1;

	produto(numero, &cont);

	printf("Prod = %Ld\n", cont);

	return 0;
}