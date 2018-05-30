#include <stdio.h>

int main()
{
	char rua[100];
    int num_rua;
    char bairro[100];
    char cidade[100];
    char estado[100];
    long int cep;
    
    scanf("%[^\n]s", rua);
	scanf("%d\n", &num_rua);
	scanf(" %[^\n]s", bairro);
	scanf(" %[^\n]s", cidade);
	scanf(" %[^\n]s", estado);
	scanf(" %ld", &cep);
	
	printf("%s, %d.\n", rua, num_rua);
	printf("Bairro: %s. Cep: %ld\n", bairro, cep);
	printf("%s/%s", cidade, estado);
}