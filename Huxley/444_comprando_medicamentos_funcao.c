#include <stdio.h>

void medicamentos(int caixa)
{
	printf("%d\n", caixa / 4);

	printf("%d\n", caixa % 4);
}

int main()
{
	int caixas;

	scanf("%d", &caixas);
    
    caixas = caixas * 35;
    
	medicamentos(caixas); // 35 medicamentos
}