/*0 1 1 2 3 5 8 13 21*/ 

#include <stdio.h>
void fibonacci(int num1, int num2, int n)
{
	if(n == 0)
	{
		return;
	}
	fibonacci(num1 - 1, num2 - 2, n - n);

	printf("%d\n", n);
}

int main()
{
	int numero1, numero2, n_numeros;

	scanf("%d %d %d", &numero1, &numero2, &n_numeros);

	fibonacci(numero1, numero2, n_numeros);
}