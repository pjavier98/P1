#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float celsius(float fahrenheit) {
	return ((5*fahrenheit - 160) / 9);
}
int main() {
	float fahrenheit;
	scanf("%f", &fahrenheit);

	printf("%.2f\n", celsius(fahrenheit));
	return 0;
}