#include <stdio.h>
#include <stdlib.h>

void comparar(int tam_a, int tam_b, int quantidade_a, int quantidade_b, int vet_a[], int vet_b[])
{
    
	if (vet_a[quantidade_a - 1] < vet_b[tam_b - quantidade_b])
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }

}

void troca(int *a, int *b)
{
	int temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void ordenar(int tamanho, int num[], int i, int j)
{
	if (tamanho == i)
	{
	    return;
	}

	if (j < tamanho)
	{
		if (num[i] > num[j])
		{
			troca(&num[i], &num[j]);
		}

		return ordenar(tamanho, num, i, j + 1);
	}

	ordenar(tamanho, num, i + 1, j = i + 1);
}


void ler_b(int vet_b[], int tam_b, int i)
{
	if (tam_b == i)
	{
		return;
	}

	scanf("%d", &vet_b[i]);

	ler_a(vet_b, tam_b, i + 1);
}

void ler_a(int vet_a[], int tam_a, int i)
{
	if (tam_a == i)
	{
		return;
	}

	scanf("%d", &vet_a[i]);

	ler_a(vet_a, tam_a, i + 1);
}

int main()
{
	int tamanho_a;
	scanf("%d", &tamanho_a);

	int tamanho_b;
	scanf("%d", &tamanho_b);

	int *vetor_a = malloc(tamanho_a * sizeof(int));
	int *vetor_b = malloc(tamanho_b * sizeof(int));

	int quantidade_a, quantidade_b;

	scanf("%d %d", &quantidade_a, &quantidade_b);

	ler_a(vetor_a, tamanho_a, 0);

	ler_a(vetor_b, tamanho_b, 0);

	ordenar(tamanho_a, vetor_a, 0, 0);
	ordenar(tamanho_b, vetor_b, 0, 0);
    
	comparar(tamanho_a, tamanho_b, quantidade_a, quantidade_b, vetor_a, vetor_b);

	return 0;
}