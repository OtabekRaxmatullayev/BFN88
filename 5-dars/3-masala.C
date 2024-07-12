#include <stdio.h>
int main() {

	int a,b;
	a=10;
	b=0;

	while(a<=20) {

		b=b+a*a;
		a +=1;
	}
		printf("%d",b);

	return 0;
	}
