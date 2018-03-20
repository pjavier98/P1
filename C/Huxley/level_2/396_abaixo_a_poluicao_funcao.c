#include <stdio.h> 

void preco(int num, float *multa, int *cont) 
{
	scanf("%d", &num);

	if (num == 999)
	{
		return;
	}	

	if (num > 2)
	{
		*multa += (num - 2) * 12.89;

		*cont += 1;
	}

	preco(num, multa, cont);

} 

int main() 
{
	int carros, casas_multadas; 
	
	float multas ;

	multas = 0;

	casas_multadas = 0;

    preco(carros, &multas, &casas_multadas);
    
    printf("%.2f\n%d", multas, casas_multadas);

	return 0;
}