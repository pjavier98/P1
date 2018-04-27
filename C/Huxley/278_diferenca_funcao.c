#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int funcao(int A,int B, int C, int D) {

	return ((A*B) - (C*D));
}

int main() {
	int A,B,C,D;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	printf("DIFERENCA = %d\n",funcao(A, B, C, D));
	return 0;
}