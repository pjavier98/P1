#include <stdio.h>
#include <math.h>

void quantidade()
{
	long int a, b, c; // dimensao conteiner

	long int x, y, z; // dimensao navio

	scanf("%ld %ld %ld", &a, &b, &c);

	scanf("%ld %ld %ld", &x, &y, &z);
    
    int largura = x / a;
    
    int comprimento = y / b;
    
	int altura = z / c;
	
	printf("%d", altura * largura * comprimento);
}

int main()
{
	quantidade();

	return 0;
}