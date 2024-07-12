#include <stdio.h>
#include <math.h>
int main() {

	float n,k,l,m;

	scanf("%f",&n);
	m=1.1;
	l=m+0.1*(n-1);

	for(float b=1;b<=n;b++) {

		k=k+m*pow(-1,b-1);
		m += 0.1;

	}
		printf("%.1f",k);
	}
