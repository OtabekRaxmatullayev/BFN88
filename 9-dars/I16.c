#include <stdio.h>

int func(int a) {

	int b=1,c=0;

	scanf("%d",&a);

	while(a/2>=b) {

		if(a%b==0) {

			c +=1;

	}
		b++;

	}

		return c;

	}

int main() {

	int d=func(0);

	if(d==1) {

		printf("1");

	} else printf("0");

	}
