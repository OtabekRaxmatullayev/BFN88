#include <stdio.h>
int main() {

	int son,a,b,c,d,min;

	scanf("%4d",&son);
	a=son%10;
	b=son%100/10;
	c=son%1000/100;
	d=son/1000;
	min=a;
	
	if(min>d) { 
		     min=d;
	}
	if(min>c) {

		min=c;
	}
	if(min>b) {
		min=b;
	}
		printf("%d",min);
	}
