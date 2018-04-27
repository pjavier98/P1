#include <stdio.h>

void votos(int num, int alibaba, int alcapone, int brancos, int nulos, int cont)
{
	if (num == -1)
	{
	    double temp = cont - nulos;
	    
		printf("%d\n", alibaba);
		printf("%d\n", alcapone);
		printf("%d\n", brancos);
		printf("%d\n", nulos);

		if (alibaba > alcapone)
		{
			printf("83\n");
		}

		else
		{
			printf("93\n");
		}

		printf("%.2lf\n", (alibaba / temp) * 100);
		printf("%.2lf\n", (alcapone / temp) * 100);

		return;
	}

	else
	{
		cont += 1;

		if (num == 83)
		{
			alibaba += 1;
		}

		else if (num == 93)
		{
			alcapone += 1;
		}

		else if (num == 0)
		{
			brancos += 1;
		}

		else
		{
			nulos += 1;
		}
	}

	scanf("%d", &num);

	votos(num, alibaba, alcapone, brancos, nulos, cont);
}

int main()
{
	int numero; // votos

	scanf("%d", &numero);

	votos(numero, 0, 0, 0, 0, 0);

	return 0;
}