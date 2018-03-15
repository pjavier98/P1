#include <stdio.h> 

float preco(int quantidade) 
{
	if (quantidade == 999)
	{
		return 0;
	}	

	return (quantidade - 2) * 12.89 + preco(quantidade);

} 

int main() {
	int quantidade;

	scanf("%d", &quantidade);

    printf("%.2f",preco(quantidade));

	return 0;
}