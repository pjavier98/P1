#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void preco(float arv, float a, float P_a, float b, float P_b, float c, float P_c, float *preco_total, float *preco_pessoas)
{
    *preco_total = arv + (a * P_a) + (b * P_b) + (c * P_c);
    
    *preco_pessoas = *preco_total / 21; // 20 + ele
    
}

int main() 
{
    float arvore, enfeite_a, preco_a, enfeite_b, preco_b, enfeite_c, preco_c, preco_total, preco_pessoas;
    
    scanf("%f %f %f %f %f %f %f", &arvore, &enfeite_a, &preco_a, &enfeite_b, &preco_b, &enfeite_c, &preco_c);
    
    preco(arvore, enfeite_a, preco_a, enfeite_b, preco_b, enfeite_c, preco_c, &preco_total, &preco_pessoas);
    
    printf("%.2f\n%.2f", preco_total, preco_pessoas);
    
	return 0;
}