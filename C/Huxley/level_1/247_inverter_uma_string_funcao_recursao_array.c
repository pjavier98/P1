#include <stdio.h>
#include <stdlib.h>

void inverter(char letras[], int cont)
{
    if (cont < 0)
    {
        return;
    }
    
    else
    {
        printf("%c", letras[cont]);
    }
    
    inverter(letras, cont - 1);
}

void leitura(char letras[], int i, int *cont)
{
	if (scanf("%c", &letras[i]) != EOF)
	{
	    *cont += 1;
	    
		leitura(letras, i + 1, cont);
	}
}

int main()
{
	char *letras = malloc(255 * sizeof(char));
    
    int cont = 0;
    
	leitura(letras, 0, &cont);
	
	inverter(letras, cont);
	
	return 0;
}