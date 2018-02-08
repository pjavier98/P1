#include <stdio.h>

int main()
{
	int num1,num2,num3,numx;
	scanf("%d%d%d",&num1,&num2,&num3);

	if(num1<num2)
	{
		numx = num1;
		num1 = num2;
		num2 = numx;
	}
	if(num1<num3)
	{
		numx = num1;
		num1 = num3;
		num3 = numx;
	}
	if(num2<num3)
	{
		numx = num2;
		num2 = num3;
		num3 = numx;
	}
	printf("%d\n%d\n%d\n",num1,num2,num3);
	return 0;
}