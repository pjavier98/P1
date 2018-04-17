#include <stdio.h>
#include <stdlib.h>

void calcular(int id, int num_voo, int voo[], int lugares[], int i, int cont)
{
    if (i == 37)
    {
        if (cont > 0)
        {
            printf("%d\n", id);
        }
        
        else
        {
            printf("INDISPONIVEL\n");
        }
        
        return;
    }
    
    else
    {
        if (num_voo == voo[i] && lugares[i] > 0)
        {
            cont += 1;
            
            lugares[i] = lugares[i] - 1;
        }
    }
    
    calcular(id, num_voo, voo, lugares, i + 1, cont);
}

void ler_passageiro(int id, int num_voo, int voo[], int lugares[])
{
	scanf("%d %d", &id, &num_voo);

	if (id == 9999)
	{
		return;
	}
    
	else
	{
		calcular(id, num_voo, voo, lugares, 0, 0);
	}
	
	ler_passageiro(id, num_voo, voo, lugares);
}

void ler_avioes(int voo[], int lugares[], int i)
{
	if (i == 37)
	{
		return;
	}

	scanf("%d %d", &voo[i], &lugares[i]);
	
	ler_avioes(voo, lugares, i + 1);
}

int main()
{
	int *voo = malloc(37 * sizeof(int));

	int *lugares = malloc(37 * sizeof(int));

	int id, num_voo;

	ler_avioes(voo, lugares, 0);

	ler_passageiro(id, num_voo, voo, lugares);
}