#include <stdio.h>
int main() {


	int son,a,b;
	a=1;
	b=0;
	scanf("%d",&son);

	do {

		if(son%a==0) {

			b=b+a;

		}

			a++;

	} while(son>a);

		if(son==b)

			puts(" mukammal son ");

	   else puts(" mukammal emas ");

	}
