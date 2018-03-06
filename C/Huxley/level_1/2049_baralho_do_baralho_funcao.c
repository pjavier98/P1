/*A pontuação no jogo começa com 0 e vai sendo acumulada:
+ Número da menor carta, se estiverem em ordem crescente com distância 1;
+ Número da menor carta, se todas forem iguais;
+ Número da menor carta / 2, se existirem apenas duas menores cartas iguais;
+ Número da maior carta / 2, se existirem apenas duas maiores cartas iguais;
+ 8, se a soma das cartas for 8*/

#include <stdio.h>

void ordenar(int *carta1, int *carta2)
{
	int temp;

	if (*carta1 > *carta2) 
	{
		temp = *carta1;
		*carta1 = *carta2;
		*carta2 = temp;
	}
}

int pontos(int carta1, int carta2, int carta3)
{
	float cont = 0;

	if (carta1+1 == carta2 && carta2+1 == carta3) 
	{
		cont += carta1;
	}
	
	if (carta1 == carta2 && carta2 == carta3) 
	{
		cont += carta1;
	}
	
	if (carta1 == carta2 && carta2 < carta3)
	{
		cont += carta1/2;
	}
	
	if (carta2 == carta3 && carta2 > carta1)
	{
		cont += carta3/2;
	}
	
	if (carta1 + carta2 + carta3 == 8)
	{
		cont += 8;
	}
	return cont;
}

int baralho(int carta1, int carta2, int carta3) 
{
	float paes;
	float willy;

	scanf("%d%d%d\n", &carta1, &carta2, &carta3);
	ordenar(&carta1, &carta3);
	ordenar(&carta1, &carta2);
	ordenar(&carta2, &carta3);
	paes = pontos(carta1,carta2,carta3);
	
	scanf("%d%d%d\n", &carta1, &carta2, &carta3);
	ordenar(&carta1, &carta3);
	ordenar(&carta1, &carta2);
	ordenar(&carta2, &carta3);
	willy = pontos(carta1,carta2,carta3);

	if (paes > willy)
	{
		return 1;
	}
	else if (paes < willy)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

int main() 
{
	int carta1, carta2, carta3;
	
	printf("%d\n", baralho(carta1, carta2, carta3));	
}