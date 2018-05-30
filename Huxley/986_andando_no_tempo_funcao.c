#include <stdio.h>
void temp(int a, int b, int c) {
	if ((a==b || b==c || a==c) || (a+b==c) || (a+c==b) || (b+c==a)) {
		printf("S");
	}
	
	else {
	printf("N");
	}
}
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	temp(a, b, c);	
}