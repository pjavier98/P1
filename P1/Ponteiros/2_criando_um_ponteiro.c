#include <stdio.h>

int main()
{
	int x; 
	
	x = 10; 

	int *ponteiro;

	*ponteiro = &x; // vai apontar o endereço da variavel x

	printf("%d\n", *ponteiro); // mostra o valor que foi guardado no endereço de memoria
	printf("%d\n", ponteiro); // mostra o valor do endereço de memoria

	return 0;
}