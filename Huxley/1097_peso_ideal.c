#include <stdio.h>

int main()
{
	char type;
	double altura;
	double resultado;
    int resto;
    
	scanf("%c %lf", &type, &altura);

	if (type == 'm')
	{
		if (altura > 0)
		{
			resultado = (72.7 * altura) - 58;
			resto = resultado * 100;
			
			if (resto % 10 == 0)
			{
			    printf("%.1lf", resultado);
			}
			
			else
			{
			    printf("%.2lf", resultado);
			}
		}

		else
		{
			printf("Altura invalida.\n");
		}
	}

	else if (type == 'f')
	{
		if (altura > 0)
		{
			resultado = (62.1 * altura) - 44.7;	
			resto = resultado * 100;
			
			if (resto % 10 == 0)
			{
			    printf("%.1lf", resultado);
			}
			
			else
			{
			    printf("%.2lf", resultado);
			}
		}

		else
		{
			printf("Altura invalida.\n");
		}
	}

	else
	{
		printf("O sexo informado eh invalido.");
	}

	return 0;
}