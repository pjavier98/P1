#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void carros(int ano, int cont_ano, float velocidade, float cont_vel, float soma, float cont_soma, char s) {
    soma = 0;
    cont_soma = 0;
    cont_vel = 0;
  while(s!='n' || s=='N') {
	    scanf("%d %f",&ano,&velocidade);
	  	cont_soma++;  
    	soma=velocidade+soma;
	    
	    
		if(cont_vel<velocidade) { 
			cont_vel++;
			cont_vel=velocidade;
		}
		if(cont_ano<ano) {
			cont_ano++;
			cont_ano=ano;
			
		}
		scanf("%c",&s);
	}
	
	printf("%.2f\n%d\n%.2f\n",cont_vel,cont_ano,soma/cont_soma);
}
int main() {
	int ano, cont_ano;
	float velocidade,cont_vel,soma,cont_soma; //soma vai guardar os valores das velocidades
	char s = ' ';
  
  scanf("%c",&s);
  if(s=='n' || s=='N') {
    printf("zero\n");
  }
  else {
    carros(ano,cont_ano,velocidade,cont_vel,soma,cont_soma,s);
  }
	return 0;
}

//ele quer o maior ano maior velocidade e media das velocidades