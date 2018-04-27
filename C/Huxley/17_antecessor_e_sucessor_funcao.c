#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int antecesor(int number) {
	return (number - 1);
}

int sucessor(int number) {
	return (number + 1);
}

int main() {

	int number;
	scanf("%d",&number);

	printf("%d %d\n",antecesor(number),sucessor(number));
	return 0;
}