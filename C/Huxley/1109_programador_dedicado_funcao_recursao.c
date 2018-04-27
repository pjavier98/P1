#include <stdio.h>

void programador(int pro, int lin, int cont, int *temp, int *acum, int *dia)
{

	if (cont == 0)
	{
		return;
	}

	
	if (pro >= 5)
	{
		*temp += 1;
	}

	if (lin >= 100)
	{
		*acum += 1;
	}

	if (lin >= dia)
	{
		*dia = lin;
	}
	programador(pro, lin, cont - 1, temp, acum, dia);
}

int main()
{
	int contador, temporal, acumulador, dia;

	int programas, linhas;

	scanf("%d\n%d\n", &programas, &linhas);

	int mult = programas * linhas;

	contador = 7;

	temporal = 0;

	acumulador = 0;

	dia = 0;

	programador(programas , linhas, contador, &temporal, &acumulador, &dia);

	printf("%d %d %d\n", temporal, acumulador, dia);

	return 0;
}