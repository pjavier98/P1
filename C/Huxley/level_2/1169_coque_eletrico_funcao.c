// Level 	Pot�ncia (em W)
// 1-20  	20 + (level)3
// 21-40 	8000 + (level - 10)2
// 41-60 	9000 + 5*level
// 61-80 	9300 + 2*level
// 81-100 	9500 + level

#include <stdio.h>
#include <math.h>

int potencia(int voltagem) {
	if(voltagem>=81 && voltagem<100) {
		return (9500 + voltagem);
	}
	else if(voltagem>=61) {
		return (9300 + 2*voltagem);
	}
	else if(voltagem>=41) {
		return (9000 + 5*voltagem);
	}
	else if(voltagem>=21) {
		return (8000 + pow((voltagem - 10),2));
	}
	else if(voltagem>=1) {
		return (20 + pow(voltagem,3));
	}
}
int main() {
	int voltagem;
	scanf("%d",&voltagem);
	printf("Potencia de : %d W\n",potencia(voltagem));
	return 0;
}