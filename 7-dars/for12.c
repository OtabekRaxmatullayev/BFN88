#include <stdio.h>
int main() {

	int n;
	float m,l,k;

	scanf("%d",&n);
	m=1.1;
	l=m+0.1*n;
	k=1;

	for(m;m<=l;m +=0.1) {

		k=k*m;

	}
		printf("%f",k);
	}
