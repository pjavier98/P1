#include <stdio.h>
#include <math.h>

void variancia(double array[10000], int tamanho, double media, int i, double var, int cont)
{
    
    if (i == tamanho)
    {
        printf("%.2lf\n", sqrt(var / (tamanho - 1)));
        
        printf("%d", cont);
        
        return;
    }
    
    if (array[i] > media)
    {
        cont += 1;
    }
    
    var += pow((array[i] - media), 2);
    
    variancia(array, tamanho, media, i + 1, var, cont);
}

void ler(double array[10000], int i, double media)
{
	scanf("%lf", &array[i]);
    
	if (array[i] == -1)
	{
	    printf("%.2lf\n", media / i);
	    
	    variancia(array, i, media / i, 0, 0, 0);
	    
		return;
	}
    
    media += array[i];
    
	ler(array, i + 1, media);
}

int main()
{
	double array[10000];

	ler(array, 0, 0);

	return 0;
}