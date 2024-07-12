#include <stdio.h>
int main() {

	int son, max;
	scanf("%d",&son);
	max=son;

	do {

		if(max<son && max>0) {

			max=son;

	}

		scanf("%d",&son);

	} while(son>=0);

			printf("%d",max);

	}
