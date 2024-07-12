#include <stdio.h>
int main() {

	float a,c;
	int n;

	scanf("%f%d",&a,&n);
	c=1;

	if(n>0) {

	for(int b=1;b<=n;b++) {

		c=c*a;

	}
		printf(" %.3f ning %d - darajasi %.3f ga teng ",a,n,c);
	}

	 else if(n==0) 

		printf("0");
	
	else puts("natural son kiriting");

	}
