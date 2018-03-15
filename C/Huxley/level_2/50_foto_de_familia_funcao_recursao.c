#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordenar(float *x, float *y) // x sendo o menor
{
    float temp;
    
    if(*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}

void ordenacao(float altura1, float altura2, float altura3, float altura4)
{
    ordenar(&altura1, &altura2);
    ordenar(&altura1, &altura3);
    ordenar(&altura1, &altura4);
    ordenar(&altura2, &altura3);
    ordenar(&altura2, &altura4);
    ordenar(&altura3, &altura4);
    
   printf("%.2f\n%.2f\n%.2f\n%.2f", altura1, altura3, altura4, altura2);
}

int main() {
    float altura1, altura2, altura3, altura4;
    
    scanf("%f %f %f %f", &altura1, &altura2, &altura3, &altura4);
    
    ordenacao(altura1, altura2, altura3, altura4);
    
	return 0;
}