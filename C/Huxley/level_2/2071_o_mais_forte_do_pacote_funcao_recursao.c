#include <stdio.h>

void calculo(int leitura, int forte, int cont)
{
	int num;

	if (leitura == 0)
	{
	    printf("%d %d\n", forte, cont);
		return;
	}
 
     scanf("%d", &num);
       
    if (forte == num)
	{
		cont += 1;
	}
	
	if (num > forte)
	{
		forte = num;
		
		cont = 1;
	}

	calculo(leitura - 1, forte, cont);
}

void pacote(int forte, int cont)
{
	int leitura;

	scanf("%d", &leitura);

	if (leitura == 0)
	{
		return;
	}

	else
	{
		calculo(leitura, forte, cont);
	}
    
    pacote(forte, cont);
}

int main()
{
	int num, forte, cont;

	pacote(0, 0);
	
}