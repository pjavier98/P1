#include <stdio.h>

void troca(int *maior, int *menor)
{
	int temp;

	if (*maior > *menor)
	{
		temp = *maior;
		*maior = *menor;
		*menor = temp;
	}
}

void comparacao(int n1, int n2, int n3, int n4, int n5)
{
	if (n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5)
	{
		printf("%d %d %d %d %d\n", n1, n2, n3, n4, n5);
		return;
	}

	else
	{
		troca(&n1, &n2);
		troca(&n2, &n3);
		troca(&n3, &n4);
		troca(&n4, &n5);
	}
	comparacao(n1, n2, n3, n4, n5);
}


int main()
{
	int num1, num2, num3, num4, num5;

	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	comparacao(num1, num2, num3, num4, num5);

	return 0;
}