#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int nota1,nota2,nota3,media;
    scanf("%d %d %d",&nota1,&nota2,&nota3);
    media = (nota1+nota2+nota3)/3;

    if(media>=7)
    {
        printf("aprovado");
    }
    else if(media<3)
    {
        printf("reprovado");
    }
    else
    {
        printf("prova final");
    }

	return 0;
}
