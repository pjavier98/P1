#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
    return pow(base,expoente);
}

int main() {
    int base, expoente;
    scanf("%d %d", &base, &expoente);
    printf("Informe a base:\nInforme o expoente:\nResultado: %d",potencia(base,expoente));
	return 0;
}
