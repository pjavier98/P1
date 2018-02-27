#include <stdio.h>
#include <math.h>
void quadrados(int numero,int a,int b) {
	if(numero == pow(b,2) - pow(a,2)) {
		printf("%d - %d\n",b*b,a*a);
		return;
	}
	quadrados(numero,a+1,b+1);
} 

void repeticao() {
	int numero;
	scanf("%d",&numero);
	if(numero==0) {
	 return;   
	}
	quadrados(numero,0,1);
	repeticao();
}

 int main() {
 	repeticao();
 	return 0;
 }