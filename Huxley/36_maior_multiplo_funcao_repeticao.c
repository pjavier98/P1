#include <stdio.h>

void maior_multiplo(int num, int limite)
{
	int cont = 0;
	
	while (num * cont <= limite)
	{
		cont++;
	}
	
	if (num <= limite)
	{
		printf("%d\n", (cont - 1) * num);
	}
	
	else
	{
		printf("sem multiplos menores que %d",limite);
	}
}

int main() 
{
	int num, limite;
	scanf("%d %d", &num, &limite);
	
	maior_multiplo( num, limite);
	
	return 0;
}