#include <stdio.h>

int main()
{
	int a,b,c,d,e; // a-> Inferface grafica b -> Inteligencia Artificial c -> Encapsulamento d -> Indenta??o e-> Uso de Structs
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if((a==1 || b==1) && (c==1 && d==1) && (e==1))
	{
	    printf("AVALIADO\n");
	}
	else
	{
	   	printf("0\n");
	}

	return 0;
}