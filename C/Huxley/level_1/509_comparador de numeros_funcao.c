/*x é maior que y
x é igual a y
x é menor que y
x é diferente de y
x é maior ou igual a y
x é menor ou igual a y*/

#include <stdio.h>
int menor_igual(int num1, int num2) {
	int cont=0;
	if(num1 <= num2) {
		cont=1;
	}
	printf("%d\n",cont);
}
int maior_igual(int num1, int num2) {
	int cont=0;
	if(num1 >= num2) {
		cont=1;
	}
	printf("%d\n",cont);
}
int diferente(int num1, int num2) {
	int cont=0;
	if(num1 != num2) {
		cont=1;
	}
	printf("%d\n",cont);
}
int menor(int num1, int num2) {
	int cont=0;
	if(num1 < num2) {
		cont=1;
	}
	printf("%d\n",cont);
}
int igual(int num1, int num2) {
	int cont=0;
	if(num1 == num2) {
		cont=1;
	}
	printf("%d\n",cont);
}
int maior(int num1, int num2) {
	int cont=0;
	if(num1 > num2) {
		cont=1;
	}
	printf("%d\n",cont);
}

int main () {
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	maior(num1,num2);
	igual(num1,num2);
	menor(num1,num2);
	diferente(num1,num2);
	maior_igual(num1,num2);
	menor_igual(num1,num2);
}