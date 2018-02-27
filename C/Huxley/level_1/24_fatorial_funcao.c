#include <stdio.h>

int fatorial(int fator) {

	if(fator <= 1) {
		return 1;
	}
	return fator*fatorial(fator-1);
}
void repetir() {
	int fator;
	scanf("%d",&fator);
	if(fator==-1) {
		return;
	}
	printf("%d\n",fatorial(fator));
	
	repetir();
}

int main() {
	repetir();
}