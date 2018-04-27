#include <stdio.h>

int secundaria(int matriz[3][3], int positivo, int negativo)
{
	if (matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1)
	{
		positivo = 1; 
	}

	if (matriz[0][0] == 0 && matriz[0][1] == 0 && matriz[1][0] == 0 && matriz[1][2] == 0 && matriz[2][1] == 0 && matriz[2][2] == 0)
	{
		negativo = 1;
	}

	if (positivo == 1 && negativo == 1)
	{
		return 2;
	}

	else
	{
		return 0;
	}
}

int principal(int matriz[3][3], int i, int j, int positivo, int negativo)
{
	if (i == 3)
	{
		if (positivo == 3 && negativo == 6)
		{
			return 1;
		}

		else
		{
			return -1;
		}
	}

	else
	{
		if (j == 3)
		{
			return principal(matriz, i + 1, 0, positivo, negativo);
		}
		
		if (i == j && matriz[i][j] == 1)
		{
			positivo += 1;
		}
		
		if (i != j && matriz[i][j] == 0)
		{
			negativo += 1;
		}

		principal(matriz, i, j + 1, positivo, negativo);
	}
}

void ler_matriz(int matriz[3][3], int i, int j) 
{
	if (i == 3)
	{
		return;
	}

	else
	{
		if (j == 3)
		{
			return ler_matriz(matriz, i + 1, 0);
		}
		
		scanf("%d", &matriz[i][j]);
		
		ler_matriz(matriz, i, j + 1);
	}
}

void stop(int i, int vida_luke, int vida_vader, int matriz[3][3], int luke, int vader)
{
    if (i == 0)
    {
        if (vida_luke > vida_vader)
        {
            printf("Luke Skywalker venceu.");
            return;
        }
        
        else if (vida_luke < vida_vader)
        {
            printf("Darth Vader venceu.");
            return;
        }
        
        else
        {
            printf("Houve empate.");
			return;
        }
    }
    
	if (vida_luke == 0 || vida_vader == 0)
	{   
	    if (vida_luke == 0 && vida_vader == 0)
		{
			printf("Houve empate.");
			return;
		}

		else if (vida_luke == 0)
		{
			printf("Darth Vader venceu.");
			return;
		}

		else
		{
			printf("Luke Skywalker venceu.");
			return;
		}

		return;
	}

	ler_matriz(matriz, 0, 0);
	
	if (matriz[0][0] == 1)
	{
	    luke = principal(matriz, 0, 0, 0, 0);
	}
	
	else
	{
	    luke = secundaria(matriz, 0, 0);
	}
	
	ler_matriz(matriz, 0, 0);
	
	if (matriz[0][0] == 1)
	{
	    vader = principal(matriz, 0, 0, 0, 0);
	}
    
    else
	{
	    vader = secundaria(matriz, 0, 0);
	}
	
	if (luke == 1)
	{
	    if (vader != 2)
	    {
	        vida_vader = vida_vader - 15;
	    }
	}
	
	if (luke == 2)
	{
	    if (vader != 1)
	    {
	        vida_vader = vida_vader - 15;
	    }
	}
	
	if (vader == 1)
	{
	    if (luke != 2)
	    {
	        vida_luke = vida_luke - 15;
	    }
	}
	
	if (vader == 2)
	{
	    if (luke != 1)
	    {
	        vida_luke = vida_luke - 15;
	    }
	}
	
    stop(i - 1, vida_luke , vida_vader, matriz, luke, vader);
}

int main()
{
	int vida_luke, vida_vader;
	int matriz[3][3];

	scanf("%d %d", &vida_luke, &vida_vader);

	stop(10, vida_luke, vida_vader, matriz, 0, 0);
	
	return 0;
}