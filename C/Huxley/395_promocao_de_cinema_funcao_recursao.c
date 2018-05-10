#include <stdio.h>

void ler(int idade, char sexo, int cont)
{
	scanf("%d", &idade);
    scanf("%c", &sexo);
    	
	if (idade == 111)
	{
		printf("%d\n", cont);
		
		return;
	}
    
    if (sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f')
    {
	    if (idade < 10 || idade > 60)
	    {
		    cont += 1;
	    }
    }
    
	if (sexo == 'M' || sexo == 'm')
	{
		if (idade > 25 && idade < 35)
		{
			cont += 1;
		}
	}
	
	ler(idade, sexo, cont);
}

int main()
{
	int idade;
	char sexo;

	ler(idade, sexo, 0);

	return 0;
}