#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int idade_em_segundos(int idade)
{
	return(idade*365*24*60*60);
}

int main()
{
	int idade;
	scanf("%d",&idade);

	printf("%d",idade_em_segundos(idade));
	
	return 0;
}