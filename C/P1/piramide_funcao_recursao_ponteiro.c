#include <stdio.h>

int piramide(int * num)
{
	int temp;

	if(* num == 1) 
	{
		* num;
	}
	temp = *num + temp;
	piramide(num - 1);

}


int main()
{
	int numero;

	scanf("%d", &numero);

	int resultado = piramide(&numero);
	
	printf("%d", resultado);

	return 0;
}