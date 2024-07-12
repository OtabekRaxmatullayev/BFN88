#include <stdio.h>

int func(int a) {

	scanf("%d",&a);

	int b=0;

	while(a>0) {

		b=b+a%10;
		a=a/10;

	}

	return b;

	}

int main() {

	int kkk=func(0);

	if(kkk%2==0)

		printf("true");

	else printf("false");

	}
