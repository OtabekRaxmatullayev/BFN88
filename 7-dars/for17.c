#include <stdio.h>
int main() {

	float a,c,d;
	int n,b;

	scanf("%f%d",&a,&n);
	b=1;
	c=1;
	d=0;

	if(n>0) {

	for(b;b<=n;b++) {

		c=c*a;
		d=d+c;

	}

		printf(" yig'indisi = %.3f",d);
	
	} else if(n==0)

		printf("0");

	 else puts("natural son kiriting");
	}
