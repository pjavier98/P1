#include <stdio.h>
void game(int dificuldade, double preco) {
	int jogos;
	int cont;
	scanf("%d",&jogos);
	for(;jogos>=1;cont++) {
        scanf("%d%lf",&dificuldade,&preco);
		if(preco<=100 && preco>60) {
			if ( dificuldade == 0) {
			preco = preco*pow(0.875,3);
			}
			else if (dificuldade == 1) {
				preco = preco*pow(0.90,3);
			}
			else if (dificuldade == 2) {
				preco = preco*pow(0.91,3);
			}
			else if (dificuldade == 3) {
				preco = preco*pow(0.925,3);
			}
			else if (dificuldade == 4) {
				preco = preco*pow(0.94,3);
			}
			else if (dificuldade == 5) {
				preco = preco*pow(0.95,3);
			}
		}	
		else if(preco>=45 && preco<=60) {
			preco=45;
		}
		else if(preco<=45) {}

		else if( dificuldade == 0 && preco>45) {
			preco = preco*pow(0.75,3);
		}
		else if (dificuldade == 1 && preco>45) {
			preco = preco*pow(0.80,3);
		}
		else if (dificuldade == 2 && preco>45) {
			preco = preco*pow(0.82,3);
		}
		else if (dificuldade == 3 && preco>45) {
			preco = preco*pow(0.85,3);
		}
		else if (dificuldade == 4 && preco>45) {
			preco = preco*pow(0.88,3);
		}
		else if (dificuldade == 5 && preco>45) {
			preco = preco*pow(0.90,3);
		}
	    jogos--;
    printf("Jogo[%d] = R$%.2lf\n",cont,preco);
	}
}
int main() {
    int dificuldade, jogos;
    double preco;
    game(dificuldade,preco);
}

