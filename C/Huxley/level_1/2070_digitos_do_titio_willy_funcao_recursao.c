#include <stdio.h>
#include <math.h>
int digitos(int num)
{

	if(num >= 0 && num <=9)
	{
		return 1;
	}
	
	return 1 + digitos(num / 10);
}

void separar(int num)
{
	if(num < 0)
	{
		return;
	}

	return separar(num / (pow(10,digitos(num) - 1)));
	printf("%d\n", num);
}


int main()
{
	int numeros;

	scanf("%d", &numeros);

	printf("%d\n", digitos(numeros));
}