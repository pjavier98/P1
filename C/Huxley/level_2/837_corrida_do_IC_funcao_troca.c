#include <stdio.h>

void troca(int *a, int *b) { //uma funcao chama a outra para evitar ter que criar uma funcao com coisas que facam o mesmo
	int temp;
	if (*a<*b) {
		temp=*a;
		*a=*b;
		*b=temp;
	}
}
void ordenar(int *a, int *b, int *c, int *d, int *e) {
		
	if (*a<*b) {
		troca(a,b);
	}
	if (*b<*c) {
		troca(b,c);
	}
	if (*c<*d) {
		troca(c,d);
	}
	if (*d<*e) {
		troca(d,e);
	}
	if (*a<*b || *b<*c || *c<*d || *d<*e) { //fica chamando a funcao ate que os parametros pedidos estejam corretos 
		ordenar (a,b,c,d,e);                //funciona como um comando de repeticao
	}
	
}

int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	ordenar(&a,&b,&c,&d,&e);
	printf("1 - %d km/h\n2 - %d km/h\n3 - %d km/h\n4 - %d km/h\n5 - %d km/h\n",a,b,c,d,e);
	return 0;
}