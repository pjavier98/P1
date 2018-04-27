#include <stdio.h>

int main()
{
	int a,b,c,d,e,temp;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	while(a<b || b<c || c<d || d<e) {
		if (a<b) {
		temp=a;
		a=b;
		b=temp;
	}
	
	else if (b<c) {
		temp=b;
		b=c;
		c=temp;
	}
	else if (c<d) {
		temp=c;
		c=d;
		d=temp;
	}
	if (d<e) {
		temp=d;
		d=e;
		e=temp;
	}

	}
	printf("1 - %d km/h\n2 - %d km/h\n3 - %d km/h\n4 - %d km/h\n5 - %d km/h\n",a,b,c,d,e);
	return 0;
}