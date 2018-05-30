#include <stdio.h>

void total(int carga_horaria_paga)
{
	printf("%d\n", (260 - carga_horaria_paga) / 24);
}

int main()
{
	int carga_horaria_paga;

	scanf("%d", &carga_horaria_paga);

	total(carga_horaria_paga);

	return 0;
}