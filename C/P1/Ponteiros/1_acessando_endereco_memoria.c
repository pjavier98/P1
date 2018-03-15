/*Em vez de alterar a variável x, irei alterar o valor que está no endereço da variável x*/


#include <stdio.h>

int main()
{
	int x; // preciso de um espaço na memória para guardar o x
	
	x = 10; // X = 10 -> no espaço reservado na memória coloque o valor 10

	/*Como posso acessar o endereço de memória de uma variável ???*/

	printf("%d\n", x); // acesso o valor que possui a variavel
	printf("%d\n", &x); // acesso o endereço da memoria através do &

	return 0;
}