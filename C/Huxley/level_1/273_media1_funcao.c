#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float media(float notaA, float notaB) {

	return(((notaA*3.5) + (notaB*7.5)) / 11); 
	
}

int main() {
	float notaA,notaB;
	scanf("%f %f",&notaA,&notaB);
	

	printf("MEDIA = %.5f\n",media(notaA, notaB));
	return 0;
}