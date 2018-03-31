#include <stdio.h>	
#include<math.h>

void calculo(double vida_clodes, double vida_bezaliel, double dano_clodes, double dano_bezaliel, int cont)
{
	
    if (ceil(vida_clodes / dano_bezaliel) < ceil(vida_bezaliel / dano_clodes))
	{
		cont = vida_clodes - dano_bezaliel;

		if (vida_clodes <= 0)
		{
			printf("Bezaliel\n");
			return;
		}
		calculo(vida_clodes = cont, vida_bezaliel, dano_clodes + 50, dano_bezaliel, cont);
	}

	if (ceil(vida_clodes / dano_bezaliel) >= ceil(vida_bezaliel / dano_clodes))
	{
		printf("Clodes\n");
		return;
	}
}

void leitura(int temp, int cont)
{
	double vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel;
	
	cont = 0;
	
	if (temp == 0)
	{
	    return;
	}
    
    else
    {
        scanf("%lf %lf %lf %lf", &vida_clodes, &vida_bezaliel, &dano_clodes, &dano_bezaliel);

	    calculo(vida_clodes, vida_bezaliel, dano_clodes, dano_bezaliel, 0);
    }
	
    leitura(temp - 1, cont);
}
int main()
{	
	int temp, cont;
	
	scanf("%d", &temp);
	
	leitura(temp, 0);
	
	return 0;
}