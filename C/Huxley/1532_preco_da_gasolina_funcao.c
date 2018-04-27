/*Um posto está vendendo combustíveis com a seguinte tabela de descontos:
		Álcool:
    até 20 litros, desconto de 3% por litro
    acima de 20 litros, desconto de 5% por litro
    Gasolina:
    até 20 litros, desconto de 4% por litro
    acima de 20 litros, desconto de 6% por litro
    Diesel:
    até 25 litros, não existe desconto
    acima de 25 litros, desconto de 4% por litro*/
 /*litro da gasolina é R$ 2,50, o preço do litro do álcool é R$ 1,90 e o preço do litro de Diesel é R$ 1,66*/
#include <stdio.h>
float diesel(float litros) {
	if(litros<25){
	    printf("R$ %.2f\n",1.66*litros);
	}
	else {
		printf("R$ %.2f\n",1.66*litros-(0.04*litros*1.66));
	}
}
float gasolina(float litros) {
	if(litros<=20) {
		printf("R$ %.2f",2.5*litros-(0.04*litros*2.5));
	}
	else {
		printf("R$ %.2f\n",2.5*litros-(0.06*litros*2.5));
	}
}
float alcool(float litros) {
	if(litros<=20) {
		printf("R$ %.2f",1.9*litros-(0.03*litros*1.9));
	}
	else {
		printf("R$ %.2f",1.9*litros-(0.05*litros*1.9));
	}
}

int main() {
	float litros;
	char type;
	scanf("%f %c",&litros,&type);
	if(type == 'A') {
		alcool(litros);
	}
	else if(type == 'G') {
		gasolina(litros);
	}
	else if(type == 'D') {
		diesel(litros);
	}


	return 0;
}