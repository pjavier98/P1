#include <stdio.h>

void piramide(int base, int *resultado) // se precisar retornar mais de um valor tem que fazer por referencia.
{
	if(base == 0)
	{
		*resultado = 0;
		
		return;
	}

	piramide(base - 1, resultado);

	*resultado += base;
}

int main()
{
	int base_piramide, resultado;

	scanf("%d", &base_piramide);

	piramide(base_piramide, &resultado);

	printf("%d\n", resultado);
}