#include <stdio.h>

void primo(int num)
{
    if (num == 0 || num == 1)
    {
        printf("N\n");
    }
    
    else if (num == 2 || num == 3)
    {
        printf("S\n");
    }
    
	else if (num % 2 == 0 || num % 3 == 0)
	{
		printf("N\n");
	}

	else
	{
		printf("S\n");
	}
}

int buracos(long int num, int temp, int cont)
{
	if (num >= 0 && num < 10)
	{
		if (num == 0 || num == 4 || num == 6 || num == 9)
        {
            cont += 1;
        }
        
        if (num == 8)
        {
            cont += 2;
        }
        
		return cont;
	}

	else
	{
		temp = num % 10;
        
        if (temp == 0 || temp == 4 || temp == 6 || temp == 9)
        {
            cont += 1;
        }
        
        if (temp == 8)
        {
            cont += 2;
        }
	}
    
	buracos(num / 10, temp, cont);
}

int main()
{
	long int numero;
    
    int temporal, contador;
    
    int verificar;

	scanf("%ld", &numero);

	verificar = buracos(numero, 0, 0);
	
	primo(verificar);
	
	return 0;
}
