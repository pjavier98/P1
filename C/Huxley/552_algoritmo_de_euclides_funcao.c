#include <stdio.h>

int mdc(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1;
	}

	else
	{
		mdc(num1 = num2, num1 % num2);
	}
}

void quantidade(int num1, int num2, int limite)
{
    int resultado; 
    
    if (limite == 0)
    {
        return;
    }
    else
    {
        resultado = mdc(num1, num2);
        
        printf("MDC(%d,%d) = %d\n",num1,num2,resultado);
        
        scanf("%d %d", &num1, &num2);
        
        quantidade(num1 , num2, limite - 1);
    }
}

int main()
{
	int limite, num1, num2;
	scanf("%d %d %d", &limite, &num1, &num2);
	
	quantidade(num1,num2,limite);
}