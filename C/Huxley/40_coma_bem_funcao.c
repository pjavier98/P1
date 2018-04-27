#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float conta(int gasto) {
	return (gasto+gasto*0.1);
}
int main() {
	int gasto;
	scanf("%d",&gasto);

	printf("%.2f\n", conta(gasto));
	return 0;
}