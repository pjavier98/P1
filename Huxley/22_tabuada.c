#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tabuada(int num)
{
		
		
    printf("%d X %d = %d\n",num,1,num*1); 
    printf("%d X %d = %d\n",num,2,num*2);
    printf("%d X %d = %d\n",num,3,num*3);
    printf("%d X %d = %d\n",num,4,num*4);
    printf("%d X %d = %d\n",num,5,num*5);
	printf("%d X %d = %d\n",num,6,num*6);
    printf("%d X %d = %d\n",num,7,num*7);
    printf("%d X %d = %d\n",num,8,num*8);
    printf("%d X %d = %d\n",num,9,num*9);
      
}

int main() 
{
	int num ;
	scanf("%d",&num);

	tabuada(num);
    

   return 0;
}