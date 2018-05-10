#include <stdio.h>

int main()
{
	int tempo, casas;

	scanf("%d %d", &tempo, &casas);
    
    if (tempo * casas % 108000 == 0)
    {
	    printf("%d\n", tempo * casas / 108000);
    }
    
    else
    {
        printf("%d\n", 1 + (tempo * casas / 108000));
    }
	// 108000 -> 90 minutos (dia) * 20 ticks/segundo * 60 (converter para segundos)

	return 0;
}