#include <stdio.h>
#include <ctype.h>

void comparar(char comida[15], char bebida[15], int i)
{
    if (comida[i] == 'l')
    {
        if (bebida[i] == 's')
        {
            printf("10.50");
        }
        
        else
        {
            printf("11.00");
        }
        
    }
    
    else if (comida[i] == 'e')
    {
        if (bebida[i] == 's')
        {
            printf("13.50");
        }
        
        else
        {
            printf("14.00");
        }  
    }
    
    return;
}

void ler_bebida(char bebida[15], int i)
{
    scanf("%c", &bebida[i]);
    
    if (bebida[i] == '\0' || bebida[i] == '\n')
    {
        return;
    }
    
    bebida[i] = tolower(bebida[i]);
    
    ler_bebida(bebida, i + 1);
}


void ler_comida(char comida[15], int i)
{
    scanf("%c", &comida[i]);
    
    if (comida[i] == '\0' || comida[i] == '\n')
    {   
        return;
    }
    
    comida[i] = tolower(comida[i]);
    
    ler_comida(comida, i + 1);
}

int main()
{
	char comida[15];
    char bebida[15];
    
	ler_comida(comida, 0);
	ler_bebida(bebida, 0);
	
	comparar(comida, bebida, 0);
	
	return 0;
}