#include <stdio.h>
int main() {

	int sonlar,a,b;
	float c;

	a=0;
	b=0;

	do {

		scanf("%d",&sonlar);

		a=a+sonlar;
		b++;




	} while(sonlar>0);

		c=(float)a/b;

			printf(" yig'indisi: %d\n ", a);
			printf(" kiritilgan sonlar soni: %d\n ", b);
			printf(" o'rtachasi: %.2f ", c);

	}
