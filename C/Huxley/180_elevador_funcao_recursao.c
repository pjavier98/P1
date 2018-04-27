#include <stdio.h>

int elevador(int sensor, int cap, int cap_total)
{
	int saida, entrada, quant;
	
	if(sensor == 0) 
	{
	    return 0;    
	}
	
	scanf("%d %d", &saida, &entrada);
	
	quant = cap - saida + entrada;
	
	if (quant > cap_total)
	{
	    return 1 + elevador(sensor - 1, quant, cap_total);	
	}

	else
	{
		return 0 + elevador(sensor - 1, quant, cap_total);
	}
	
}

int main()
{
	int leituras, capacidade;

	scanf("%d %d", &leituras, &capacidade);
	
	int s = elevador(leituras, 0, capacidade);
	
	if(s == 0) 
	{
	    printf("N");
	} 
	
	else 
	{
	    printf("S");
	}
	

	return 0;
}