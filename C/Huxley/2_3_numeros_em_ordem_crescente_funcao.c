#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ordenacao(int num1, int num2, int num3, int temp) { //num1 - menor / num2 - medio / num3 - maior
	if(num1>num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if(num2>num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if(num1>num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	printf("%d\n%d\n%d\n",num1,num2,num3);
}
int main() {
	int num1,num2,num3, temp;
	scanf("%d%d%d",&num1,&num2,&num3);
	ordenacao(num1,num2,num3,temp);
	return 0;
}