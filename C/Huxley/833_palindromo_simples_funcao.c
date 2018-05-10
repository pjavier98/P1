#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void comparar(char letra[5], int i, int vogal, int con_1, int con_2)
{
    if (i == 5)
    {
        if (con_1 % 2 == 0 || vogal % 2 == 0 || con_2 % 2 == 0)
        {
            printf("sim");    
        }
        
        else
        {
            printf("nao");
        }
        
        return;
    }
    
    if (letra[i] == 'a')
    {
        vogal += 1;
    }
    
    else if (letra[i] == 'b')
    {
        con_1 += 1;
    }
    
    else
    {
        con_2 += 1;
    }
    
    comparar(letra, i + 1, vogal, con_1, con_2);
}

void ler(char letra[5], int i)
{
    if (i == 5)
    {
        return;
    }
    
    scanf("%c ", &letra[i]);
    
    ler(letra, i + 1);
}

int main() 
{
    char letra[5];
    
    ler(letra, 0);
    
    comparar(letra, 0, 0, 0, 0);
    
	return 0;
}