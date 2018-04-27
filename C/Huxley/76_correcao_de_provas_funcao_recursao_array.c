#include <stdio.h>

void frequencia(double notas[], double nota2[], int cont, int i, int j, double temp, double nota_maior, int cont_maior)
{
	if (j == cont)
	{	
		if (temp > cont_maior)
		{
			cont_maior = temp;

			nota_maior = nota2[i];
		}

		if (nota2[i] == 10)
		{
			printf("%.1lf\n", nota_maior);

			return;
		}
		
		frequencia(notas, nota2, cont, i + 1, 0, 0, nota_maior, cont_maior);
		
		return;	
	}

	if (nota2[i] == notas[j])
	{
		temp += 1;
	}

	frequencia(notas, nota2, cont, i, j + 1, temp, nota_maior, cont_maior);
}

void aprovacao(double cont, double notas[], int j, double temp)
{
	if (cont == j)
	{
		printf("%.1lf%\n", temp / cont * 100);

		return;
	}

	if (notas[j] >= 6)
	{
		temp += 1;
	}

	aprovacao(cont, notas, j + 1, temp);
}

int comparar_respostas(char gabarito[], char respostas, int i, double cont)
{
	if (i == 10)
	{
		return cont;
	}

	scanf("%c", &respostas);
    
	if (gabarito[i] == respostas)
	{
		cont += 1;
	}

	comparar_respostas(gabarito, respostas, i + 1, cont);
}

int ler_numero(char gabarito[], int num, double notas[], double ac, int j, int cont)
{
	scanf("%d ", &num);

	if (num == 9999)
	{
		return cont;
	}

	else
	{
		printf("%d ", num);

	    cont += 1;
	    
	    ac = comparar_respostas(gabarito, 0, 0, 0);

	    printf("%.1lf\n", ac);
	    
	    notas[j] = ac;
	}

	ler_numero(gabarito, num, notas, ac, j + 1, cont);
}

void leitura(char gabarito[], int i)
{
	if (i == 10)
	{
		return;
	}

	scanf("%c", &gabarito[i]);

	leitura(gabarito, i + 1);
}

int main()
{
    char *gabarito = malloc(10 * sizeof(char));
    
    double *notas = malloc(10 * sizeof(double));

    double nota2[11] = {0,1,2,3,4,5,6,7,8,9,10};
    
	leitura(gabarito, 0);

	int cont = ler_numero(gabarito, 0, notas, 0, 0, 0);
	
    aprovacao(cont , notas, 0, 0);

    frequencia(notas, nota2, cont, 0, 1, 0, 0, 0);
    
	return 0;
}