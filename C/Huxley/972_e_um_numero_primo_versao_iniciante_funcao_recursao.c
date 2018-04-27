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
        printf("0\n");
    }
    
    else if (num == 2 || num == 3)
    {
        printf("1\n");
    }
    
	else if (num % 2 == 0 || num % 3 == 0)
	{
		printf("0\n");
	}

	else
	{
		printf("1\n");
	}
	
        
	primo(num);
}

int main()
{
	int numero;

	primo(numero);

	return 0;
}