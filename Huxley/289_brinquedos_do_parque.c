#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int altura,idade,cont;
    scanf("%d %d",&altura,&idade);

    if(altura>=140 && idade>=14)
    {
        cont++;
    }
    if(altura>=150 && idade>=12)
    {
        cont++;
    }
    if(altura>=170 || idade>=16)
    {
        cont++;
    }

    printf("%d\n",cont);
	return 0;
}
