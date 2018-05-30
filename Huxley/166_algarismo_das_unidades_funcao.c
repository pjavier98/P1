#include <stdio.h>
int unidades(int x) {
	return (x%10);
}
int main() {
	int x;
	scanf("%d",&x);
	printf("%d\n",unidades(x));
	return 0;
}