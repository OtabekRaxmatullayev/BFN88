#include <stdio.h>
int main() {

	float a,c;
	int n,b;

	scanf("%f%d",&a,&n);
	b=1;
	c=1;

	if(n>0) {

	for(b;b<=n;b++) {

		c=c*a;

		printf("%.3f ning %d - darajasi = %.3f\n",a,b,c);
	}

	} else if(n==0)

		printf("0");

	 else puts("natural son kiriting");

	}
