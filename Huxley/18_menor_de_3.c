#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);  // fazer so com (if)
     if (a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a>c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (b>c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d",a);
	return 0;
}
