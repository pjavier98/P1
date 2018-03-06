#include <stdio.h>
int quadrado(int n, int m, int a)
{
   	int altura = 0, largura = 0;
    if (n % a == 0) 
    {
        largura = (n / a);
    } 
  	else 
    {
        largura = ((n/a) + 1);
    }
		if(m % a == 0) 
    { 
        altura = (m/a);
    }
  	else 
    {
       	altura = ((m/a) + 1);
    }
  	return altura * largura;
}
int main() 
{
	int n,m,a;    // n -> lado do retangulo  m -> lado do retangulo  a- > lado da laje
	scanf("%d %d %d", &n, &m, &a);
	printf("%d",quadrado(n,m,a));
}