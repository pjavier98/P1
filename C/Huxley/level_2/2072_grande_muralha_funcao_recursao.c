#include <stdio.h>

int muralha(int quant)
{
    char type;
    
    scanf(" %c", &type);
    
	if (quant == 0)
	{
		return;
	}
    
    if (type == 'C')
    {
        printf("aqui");    
    }
    
	muralha(quant - 1);
}

int main()
{
	int quantidade;
	
	scanf("%d", &quantidade);
	
	muralha(quantidade);
	
}