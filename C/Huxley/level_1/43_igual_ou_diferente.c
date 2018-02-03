#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c)
    {
        x=1;
    }
    else if (a!=b && b!=c && a!=c)
    {
        x=2;
    }
    else
    {
        x=3;
    }
    printf("%d",x);

	return 0;
}
