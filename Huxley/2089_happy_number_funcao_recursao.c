#include <stdio.h>
#include <math.h>

int happy(int num, int cont, int temp)
{
	if (num >= 0 && num < 10)
	{
		return temp + pow(num, 2);
	}

	else
	{
		temp += pow(num % 10, 2);
	}
	
	happy(num / 10, cont, temp);
}

void leitura(int num, int cont, int temp)
{
    
    temp = happy(num, 0, 0);
    
    if (temp == 1)
    {
        printf("S");
        return;
    }
    
    else if (temp == 37 || temp == cont)
    {
        printf("N");
        return;
    }
    
	leitura(num = temp, cont, temp);

}

int main()
{
    int numero, contador, temp;

	scanf("%d", &numero);

	contador = numero;
	
	leitura(numero, contador, temp);
	
	return 0;
}