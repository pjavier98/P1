    /*"Aprovado", se a média estiver no intervalo [70; 100]
    "Reprovado", se a média estiver no intervalo [0; 40] 
    "Final", se a média estiver no intervalo (40; 70).
    "Média inválida" em qualquer outro caso.*/
void aluno(float notaA, float notaB, float notaC) {
	double media = (notaA+notaB+notaC)/3;
	if(media >= 70 && media <= 100) {
		printf("A media do aluno foi %.2f e ele foi APROVADO",media);
	}
	else if(media >= 0 && media <= 40) {
		printf("A media do aluno foi %.2f e ele foi REPROVADO",media);
	}
	else if(media>40 && media<70) {
		printf("A media do aluno foi %.2f e ele foi FINAL",media);
	}
	else {
		printf("Media invalida");
	}
}
#include <stdio.h> 
int main () {
	int notaA, notaB, notaC;
	scanf("%d %d %d",&notaA,&notaB,&notaC);
	aluno(notaA, notaB, notaC);
	return 0;
}