#include <stdio.h>
int main() {

	int son,a,b,c;

	scanf("%d",&son);
	a=0;
	b=1;
	c=0;

	for(b;b<=2*son-1;b+=2) {

		a=a+b;
		c += 1;

		printf(" %d ning kvadrati= %d\n",c,a);

	}

	}
