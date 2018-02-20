#include <stdio.h>

void primeiro_grau(int x,int *fx,int *gx) {
	*fx=2*x+7;
	*gx=9*x+13;

}

int main() {

	int x,fx,gx;
	scanf("%d",&x);
	primeiro_grau(x,&fx,&gx);

	printf("A funcao primeiro_grau calculou f(%d) = %d e g(%d) = %d\n",x,fx,x,gx);
	return 0;
}

// com parametro de referencia
