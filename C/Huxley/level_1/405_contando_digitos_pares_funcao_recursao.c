#include <stdio.h>

int contador(int num, int temp)
{
	if (num < 10)
	{
	    if (num % 2 == 0)
	    {
	        return temp + 1;
	    }
	    
	    else
	    {
	        return temp;
	    }
	    
	}
	    
	if (num % 2 == 0)
	{
		return contador(num / 10, temp + 1);
	}
	
	contador(num / 10, temp);
}

int main()
{
	int numero, temp;

    temp = 0;
    
	scanf("%d", &numero);

	printf("%d",contador(numero, temp));

	return 0;
}