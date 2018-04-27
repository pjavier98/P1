#include <stdio.h>

int frequencia(int quant, int verif, int cont)
{
	int num;

	scanf("%d", &num);
    
    if (quant == 0) 
    {
        return cont;    
    }
    
	if (verif == num)
	{
	cont += 1;
	}
    
    frequencia(quant - 1, verif, cont);	
}

int main()
{
	int quantidade, verificar, contador;

	scanf("%d %d", &quantidade, &verificar);

	printf("%d\n", frequencia(quantidade, verificar, contador));

	return 0;
}