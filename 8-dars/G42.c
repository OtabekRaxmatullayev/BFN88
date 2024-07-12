#include <stdio.h>
int main() {

	int n;

	scanf("%d",&n);

	for(int a=1;a<=n;a++) {

		for(int b=1;b<=n;b++) {

		if(a==1 || b==1 || a==n || b==n || a+b<=n+1 && a>n/2 || a>=b && a<=n/2) {

			printf("* ");
	} else {

		printf("  ");
	}

	}

		printf("\n");
	}

		return 0;

	}
