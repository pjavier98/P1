#include <stdio.h>
void derrotar(int p, int s, int t) {
  int cont = 0; // conta pra verificar os criterios de saida
	if(p > 0 && s > 0 && t > 0) {
		if(p % 2 == 0 || s % 2 == 0 || t % 2 == 0) {
			cont++;
		}
  	if(p > 10 || s > 10 || t > 10) {
			cont++;
  	}
  }
	if(cont == 2) {
    printf("Sim");
  }
	else {
		printf("N�o");
	}
}
int main()
{
	int p,s,t; //numeros na entrada
	scanf("%d %d %d", &p, &s, &t);
	derrotar(p,s,t);
	return 0;
}