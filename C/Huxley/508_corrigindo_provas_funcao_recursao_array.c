#include <stdio.h>

void ler(int tempos[5], int i, int tempo_medio, int horas, int minutos, int segundos)
{
	if (i == 5)
	{
		horas = (100 * (tempo_medio / 5)) / 3600;
		minutos = ((100 * (tempo_medio / 5)) % 3600) / 60;
		segundos = ((100 * (tempo_medio / 5)) % 3600) % 60;

		printf("%d\n", tempo_medio / 5);
		
		printf("%d\n%d\n%d\n", horas, minutos, segundos);
		return;
	}

	scanf("%d", &tempos[i]);

	tempo_medio += tempos[i];

	ler(tempos, i + 1, tempo_medio, horas, minutos, segundos);
}

int main()
{
	int tempos[5];

	ler(tempos, 0, 0, 0, 0, 0);
}