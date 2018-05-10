#include <stdio.h>
#include <string.h>

void print_car(char *caracteristica_habilidade, int tam_str, int pos_atual)
{
    if (tam_str == pos_atual)
    {
        return;
    }
    
	if (caracteristica_habilidade[pos_atual] == ',')
	{
		printf(" ");
	}
	
	else 
	{
	    printf("%c", caracteristica_habilidade[pos_atual]);
	}
	
	print_car(caracteristica_habilidade, tam_str, pos_atual + 1);
}

void ler()
{
	char criatura[20];
	scanf("%s", criatura);
    printf("Criatura: %s\n", criatura);
	
	int f, a, i, s;
    scanf(" %d,%d,%d,%d ", &f, &a, &i, &s);
    printf("Status:\n Forca: %d\n Agilidade: %d\n Intigencia: %d\n Sabedoria: %d\n\n", f, a, i, s);
	
	char caracteristica[20];
	scanf("%s", caracteristica);
    printf("Caracteristicas:\n");
	
	print_car(caracteristica, strlen(caracteristica), 0);
	printf(" \n\n");
    
    

	char habilidades[20];
    scanf("%s", habilidades);
    printf("Habilidades:\n");
	
	print_car(habilidades, strlen(habilidades), 0);
    printf(" \n\n");
	
	char continuar;
	scanf("%c", &continuar);
	if (continuar == ' ')
	{
		ler();
	}
}

int main()
{
	ler();

	return 0;
}