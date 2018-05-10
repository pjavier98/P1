#include <stdio.h>
#include <math.h>

void ler(int pregos, int cont)
{
	scanf("%d", &pregos);

	if (pregos % 2 != 0)
	{
		if (cont % 12 == 0)
		{
		    printf("%.2lf\n", cont / 12 * 7.89);
		    printf("%d", cont / 12);  
		}
		
		else
		{
		     printf("%.2lf\n", ((cont / 12) + 1) * 7.89);
		     printf("%d", ((cont / 12) + 1) * 12 - cont);   
		}
		
		return;
	}

	else
	{
		cont += pregos;
	}

	ler(pregos, cont);
}

int main()
{
	int pregos;

	ler(pregos, 0);

	return 0;
}