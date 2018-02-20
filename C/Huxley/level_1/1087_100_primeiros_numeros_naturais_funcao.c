#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void num_ate100(int x) {
	for(x=0;x<100;x++) {
		printf("%d\n",x);
	}
}
int main() {
	int x;
	num_ate100(x);
	return 0;
}
