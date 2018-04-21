#include <stdio.h>

void ler_2(int num2, int num1, int i)
{
    if (i > num2)
    {
        return;
    }
    
    printf("%d", i);
    
    if (i % num1 == 0)
    {
        printf("\n");
    }
    
    if (i % num1 != 0)
    {
        printf(" ");
    }
    
    ler_2(num2, num1, i + 1);
}

void ler_1(int num1, int i)
{
	if (num1 == i)
	{
	    return;
	}
	
	printf("%d", i);
	
	if (i % num1 != 0)
    {
        printf(" ");
    }
	
	ler_1(num1, i + 1);
}

int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	ler_1(num1, 1);
    
    ler_2(num2, num1, num1);
    
    return 0;
}