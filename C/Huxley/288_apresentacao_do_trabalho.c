#include <stdio.h>

int main()
{
	int a,b,c,d,e,AVALIADO; // a-> Inferface gráfica b -> Inteligência Artificial c -> Encapsulamento d -> Indentação e-> Uso de Structs
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	if(a==1 || b==1)
	{
		if(c==1 && d==1)
		{
			if(e==1)
			{
				AVALIADO=1;
			}
			else
			{
				printf("0\n");
			}
		}
		else
		{
			printf("0\n");
		}
		
		
		
	}
	else
	{
		printf("0\n");
	}
	

	if(AVALIADO==1)
	{
		printf("AVALIADO\n");
	}
	
	else if(AVALIADO==0)
	{
		printf("%d",0);
	}

