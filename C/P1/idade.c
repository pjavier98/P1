#include <stdio.h>
void maior_menor(int idade) {
  if (idade>=18) {
    printf("Maior de idade\n");
  }
  if(idade<18) {
    if (idade<=0) {
    printf("Nao nasceu\n");
  }
    if(idade>0) {
      printf("Menor de idade\n");
    }
  }
}
int main() {
  int idade;
  scanf("%d",&idade);
  maior_menor(idade);
  return 0;
}
