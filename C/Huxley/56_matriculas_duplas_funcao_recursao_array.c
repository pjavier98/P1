#include <stdio.h>
#include <stdlib.h>

void matriculas(int p2[], int p3[], int i, int j)
{	
	if (i == 45)
	{
		return;
	}
	
	if (j < 30)
	{
		if (p2[i] == p3[j])
		{
			printf("%d ", p2[i]);
		}

		matriculas(p2, p3, i, j + 1);
		
		return;
		
	}

	matriculas(p2, p3, i + 1, 0);
}

void ler_p3(int p3[], int i)
{
	if (i == 30)
	{
		return;
	}

	scanf("%d", &p3[i]);

	ler_p3(p3, i + 1);
}


void ler_p2(int p2[], int i)
{
	if (i == 45)
	{
		return;
	}

	scanf("%d", &p2[i]);

	ler_p2(p2, i + 1);
}

int main()
{	
	int *p2 = malloc(45 * sizeof(int));

	int *p3 = malloc(30 * sizeof(int));

	ler_p2(p2, 0);

	ler_p3(p3, 0);

	matriculas(p2, p3, 0, 0);

	return 0;
}