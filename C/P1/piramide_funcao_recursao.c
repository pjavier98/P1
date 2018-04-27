#include <stdio.h>

int piramide(int num)
{
	
	if(num == 1) 
	{
		return 1;
	}
	
	return num + piramide(num - 1);
	
}


int main()
{
	int numero;

	scanf("%d", &numero);

	int resultado = piramide(numero);
	
	printf("%d", resultado);

	return 0;
}