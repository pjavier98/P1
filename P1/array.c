#include <stdio.h>

void array(int n[], int i) // indice -> i - j - k ; /  array é um inteiro;
{
	if (i == 10)
	{
		return;
	}

	scanf("%d", &n[i]);

	array(n, i + 1);
}

int main()
{
	int num[10];

	array(num, 0); // ler em ordem decrescente colocar 9 e i - 1;

	printf("%d\n", num[4]);

	return 0;
}