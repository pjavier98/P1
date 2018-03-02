#include <stdio.h> 

void preco(int quantidade) {
	float multa,preco;
	int cont=0;
	scanf("%d",&quantidade);
	while(quantidade!=999) {
	    preco=0;
	    
		if(quantidade>2) {
		    cont++;
			multa += (quantidade-2)*12.89; // multa = multa + ...
			preco = multa + preco;
		}
		scanf("%d",&quantidade);
	}
	    printf("%.2f\n%d",multa,cont);
} 

int main() {
	int quantidade;
    preco(quantidade);
	return 0;
}