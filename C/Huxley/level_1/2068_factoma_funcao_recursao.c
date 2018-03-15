#include <stdio.h>

int factsoma(int n, int k)
{   
	if (n - k <= 0)
	{
		return n;
	}
   
	return n + factsoma(n - k, k); // 2 + 2, 4 + 2, 6 + 2 , ela soma com ela mesma
	
}

int main()
{
	int numero_n, numero_k;

    scanf("%d %d", &numero_n, &numero_k);

	printf("%d\n", factsoma(numero_n, numero_k));

	return 0;
}