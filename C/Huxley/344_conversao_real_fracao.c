#include <stdio.h>
#include <math.h>

int fator(int num1, int num2)
{
	if (num2 == 0)
	{
		return num1; 
	}
	else
	{
		fator(num1 = num2, num1 % num2);
	}
}

void inteiro(double numero, int cont)
{
    double num;
    
    num = numero * cont;
    
    if (num == (int)num)
    {
        int mdc = fator(num, cont);
        
        printf("%.lf/%d", num / mdc, cont / mdc);
        
        return;
    }
    
    inteiro(numero, cont * 10);
}

int main ()
{
    double numero;

    scanf("%lf", &numero);
    
    inteiro(numero, 1);
    
    return 0;
}