#include <stdio.h>
int main() {

	int son,min;
		
	scanf("%d",&son);

	min=son;

	do {
		if(min>son && min>0) {

		min=son;
	
	}
		scanf("%d",&son);

	} while (son>=0);

		printf("%d",min);

	}
