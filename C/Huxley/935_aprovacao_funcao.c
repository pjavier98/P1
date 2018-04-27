#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void media_notas(double n1, double n2, double n3)
{
    double media = (n1 + n2 + n3) / 3;
    
    printf("Informe a primeira nota:\nInforme a segunda nota:\nInforme a terceira nota:\n");
    
    if (media >= 7)
    {
        int x = media * 100;
        
        if (x % 10 != 0)
        {
            printf("Aprovado com media %.15lf", media);
        }
        
        else
        {
            printf("Aprovado com media %.1lf", media);
        }
    }
    
    else if (media >= 5 && media < 7)
    {
        int x = media * 100;
        
        if (x % 10 != 0)
        {
            printf("Recuperacao com media %.15lf", media);
        }
        
        else
        {
            printf("Recuperacao com media %.1lf", media);
        }
    }
    
    else
    {
        int x = media * 100;
        
        if (x % 10 != 0)
        {
            printf("Reprovado com media %.15lf", media);
        }
        
        else
        {
            printf("Reprovado com media %.1lf", media);
        }
    }
}

int main() 
{
    double nota1, nota2, nota3;
    
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    
    media_notas(nota1, nota2, nota3);
    
	return 0;
}