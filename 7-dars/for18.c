#include <stdio.h>
#include <math.h>
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
		d=d+c*pow(-1,b);

	}
		printf(" ifoda = %.3f ",d+1);

	} else if(n==0)

		printf("0");

	 else puts("natural son kiriting");

	}
