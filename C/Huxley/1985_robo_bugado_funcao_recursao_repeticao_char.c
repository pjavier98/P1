#include <stdio.h>

void comparar(int left, int right, int up, int down, int resultado)
{
    if (left >= right)
    {
        if (up >= down)
        {
            resultado = right * 2 + down * 2;
        }
        
        else
        {
            resultado = right * 2 + up * 2;
        }
    }
    
    else
    {
        if (up >= down)
        {
            resultado = left * 2 + down * 2;
        }
        
        else
        {
            resultado = left * 2 + up * 2;
        }
    }
    
    printf("%d", resultado);
}

void percorrer(char mov, int *left, int *right, int *up, int *down)
{
    if (mov == 'L')
    {
        *left += 1;
    }
    
    if (mov == 'R')
    {
        *right += 1;
    }
    
    if (mov == 'D')
    {
        *down += 1;
    }
    
    if (mov == 'U')
    {
        *up += 1;
    }
}

int main()
{
	int quant, i;
	int up, down, left, right;
	char mov;
	
	up = 0;
	down = 0;
	left = 0;
	right = 0;
	
	scanf("%d", &quant);

	for (i = 0; i < quant; i += 1)
	{
	    scanf(" %c", &mov);
	    //printf("%c", mov);
	    percorrer(mov, &left, &right, &up, &down);
	}
	
	comparar(left, right, up, down, 0);
	
	return 0;
}