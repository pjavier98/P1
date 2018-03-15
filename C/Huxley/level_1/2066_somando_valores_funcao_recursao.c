#include <stdio.h>

int somando (int quant, int num)
{
    int resultado;
    
	if (quant == 0)
	{
		return num;
	}
    
    scanf ("%d", &resultado);
    
    num += resultado;
    
	somando(quant - 1, num);
	
}

int main ()
{
	int quantidade, numero;
	
	scanf ("%d", &quantidade);

	printf("%d", somando(quantidade, numero));

	return 0;
}