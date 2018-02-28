/*1 livro para até 8 alunos --> Conceito A
1 livro para entre 9 e 12 alunos --> Conceito B
1 livro para entre 13 e 18 alunos --> Conceito C
1 livro para mais de 18 alunos --> Conceito D*/

#include <stdio.h>
void avaliacao(int livros, int alunos) {
	
	float divisao = alunos/livros;
	
	if (divisao>18) {
		printf("D\n");
	}
	else if (divisao>=13) {
		printf("C\n");
	}
	else if (divisao>9) {
		printf("B\n");
	}
	else if (divisao>0) {
		printf("A\n");
	}
}

int main() {
	int livros,alunos;
	
	scanf("%d %d", &livros, &alunos);
	avaliacao(livros, alunos);
}