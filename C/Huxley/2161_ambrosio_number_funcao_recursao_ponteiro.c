#include <stdio.h>

int separar(int numero, int resto, int *cont)
{
    resto = numero % 10;
    
    if (numero < 1)
	{
	    *cont += 1;
	    return;
	}
	
	if (resto != 0 && resto != 1 && resto != 2 && resto != 3 && resto != 4 && resto != 5)
	{
	    return;
	}
	
	separar(numero / 10, resto, cont);  
	
}

void comparar(int posicao, int cont, int numero)
{
	if (cont == posicao)
	{
	    printf("%d\n", numero - 1);
	    return;
	}
	
	separar(numero, 0, &cont);
	
	comparar(posicao, cont, numero + 1);
}

void ler(int quantidade, int i)
{
	int posicao;

	if (i == quantidade)
	{
		return;
	}

	scanf("%d", &posicao);
    //printf("%d\n", posicao);
    
	comparar(posicao, 0, 0);

	ler(quantidade, i + 1);
}

int main()
{
	int quant;

	scanf("%d", &quant);

	ler(quant, 0);

	return 0;
}