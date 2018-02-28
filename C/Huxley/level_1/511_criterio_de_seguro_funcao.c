#include <stdio.h>
 int seguro(int sexo, int idade) {
     if (sexo==0 && idade==1) {
 		return 1;
 	}
 	else {
 		return 0;
 	}
 }
 int main() {
 	int sexo, idade;
 	scanf("%d %d", &sexo,&idade);
 	printf("%d",seguro(sexo,idade));
 }