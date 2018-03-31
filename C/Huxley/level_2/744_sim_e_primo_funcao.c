#include <stdio.h>

void primo(int num)
{
    scanf("%d", &num);

	if (num == -1)
	{
		return;
	}

    if (num == 0 || num == 1)
    {
        printf("NAO\n");
    }
    
    else if (num == 2 || num == 3)
    {
        printf("SIM\n");
    }
    
	else if (num % 2 == 0 || num % 3 == 0)
	{
		printf("NAO\n");
	}

	else
	{
		printf("SIM\n");
	}
	
}

int main()
{
	int numero;

	primo(numero);

	return 0;
}