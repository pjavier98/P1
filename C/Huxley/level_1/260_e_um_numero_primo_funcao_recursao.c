#include <stdio.h>
#include <math.h>

void verificar(long int num, int div, int cont)
{
    if (div == 1)
    {
        if (cont > 0)
        {
            printf("0\n"); // nao primo
        }
        
        else
        {
            printf("1\n"); // primo
        }
        
        return;
    }
    
    if (num % div == 0)
    {
        cont += 1;
    }
    
    verificar(num, div - 1, cont);
}

void primo(long int num, int div, int cont)
{
    scanf("%ld", &num);

	if (num == -1)
	{
		return;
	}
    
    if (num == 0 || num == 1)
    {
        printf("0\n");
    }
    
    else
    {
        div = floor(sqrt(num)); 
        
        verificar(num, div, 0);
    }
    
    
    
    primo(num, div, cont);
}

int main()
{
	long int numero;
	
	primo(numero, 0, 0);

	return 0;
}