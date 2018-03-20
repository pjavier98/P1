#include <stdio.h>

int sonhos(int num, int cam, int alt) // cam contador para parar
{   
	alt++; // alt contador para ir fazendo as operacoes alternadas
	
	if (cam == 0)
	{
		return num;
	}

	if (num < 5)
	{
		num = num + 3;
	}

	else if (alt % 2 == 0)
	{
		num = num % 5 + num;
	}

	else
	{
		num = num + 3;
	}
    
	sonhos(num, cam - 1, alt);
}

int main()
{
	int numero, camadas, alternar;

	alternar = 0;

	scanf("%d %d", &numero, &camadas);

	printf("%d",sonhos(numero, camadas, alternar));
	
	return 0;
}