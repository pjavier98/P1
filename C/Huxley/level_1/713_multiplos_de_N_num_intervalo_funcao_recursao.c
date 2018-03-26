#include <stdio.h>

void multiplos(int num, int a, int b, int cont)
{
    if (a > b && cont == 0)
    {
        printf("INEXISTENTE\n");    
    }
    
	if (a > b)
	{
		return;
	}

	else
	{
		if (a % num == 0)
		{
			cont = a;
			
			printf("%d\n", cont);
		}
		
	}

	multiplos(num, a + 1, b, cont);
}

int main() 
{
    int numero, intervalo_a, intervalo_b;

    int contador;

    contador = 0;
    
    scanf("%d %d %d", &numero, &intervalo_a, &intervalo_b);

    multiplos(numero, intervalo_a, intervalo_b, contador);

	return 0;
}