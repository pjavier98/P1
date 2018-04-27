#include <stdio.h>

void primeiro_grau(int x,int *fx,int *gx) {
	*fx=2*x+7;
	*gx=9*x+13;
	
}

int main() {

	int x=0,fx,gx;
	primeiro_grau(x,&fx,&gx);

	printf("A funcao primeiro_grau calculou f(%d) = %d e g(%d) = %d\n",x,fx,x,gx); 

	x=5;
	primeiro_grau(x,&fx,&gx);
	printf("A funcao primeiro_grau calculou f(%d) = %d e g(%d) = %d\n",x,fx,x,gx);
}

// com parametro de referencia 
