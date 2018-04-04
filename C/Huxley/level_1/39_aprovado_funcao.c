#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void media_notas(double n1, double n2, double n3)
{
    double media = (n1 + n2 + n3) / 3;
    
    if (media >= 7)
    {
        printf("aprovado");
        
    }
    
    else if (media >= 3 && media < 7)
    {
        printf("prova final");
    }
    
    else
    {
        printf("reprovado");
    }
}

int main() 
{
    double nota1, nota2, nota3;
    
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    
    media_notas(nota1, nota2, nota3);
    
	return 0;
}