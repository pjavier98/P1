#include <stdio.h>
#include <math.h>
double desconto(int dificuldade) {

	if( dificuldade == 0) {
		return 0.25;
	}
	else if (dificuldade == 1) {
		return 0.20;
	}
	else if (dificuldade == 2) {
		return 0.18;
	}
	else if (dificuldade == 3) {
		return 0.15;
	}
	else if (dificuldade == 4) {
		return 0.12;
	}
	else if (dificuldade == 5) {
		return 0.10;
	}
}
double desconto_efetivo(double preco, double desc) {
	
	double desc_efetivo = desc;

	if(preco <= 100) {
		desc_efetivo = desc / 2;
	}

	return desc_efetivo;
}

double preco_condicao(double preco, double desc) {
	double preco_desconto, desc_efetivo;
	
	preco_desconto = preco;
	
	desc_efetivo = desconto_efetivo(preco_desconto,desc);
	preco_desconto = preco_desconto * (1 - desc_efetivo);
	
	desc_efetivo = desconto_efetivo(preco_desconto,desc);
	preco_desconto = preco_desconto * (1 - desc_efetivo);
	
	desc_efetivo = desconto_efetivo(preco_desconto,desc);
	preco_desconto = preco_desconto * (1 - desc_efetivo);

	return preco_desconto;
}

void game(double preco, int dificuldade, double desc) {
	int jogos, cont;
	double preco_desconto;
	scanf(" %d", &jogos);

	for(cont=0;jogos>=1;cont++) {
		scanf(" %d %lf", &dificuldade, &preco);
		desc = desconto(dificuldade);

		preco_desconto = preco_condicao(preco,desc);

		if(preco_desconto <= 45) {
			preco_desconto = 45;
		}
		if(preco<=45) {
			preco_desconto = preco;
		}
		jogos--;
		printf("Jogo[%d] = R$%.2lf\n", cont, preco_desconto);
	}
}

int main() {
	int jogos, dificuldade;
	double preco, preco_condicao, desc;
	game(preco,dificuldade,desc);
}



