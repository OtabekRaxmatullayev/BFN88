#include <stdio.h>
int main() {

	int a,b=1;

		scanf("%d",&a);

	do {

		if (a%b==0) {

		printf("%d\n",b);

	}

		b++;

	} while(b<=a);

	}
