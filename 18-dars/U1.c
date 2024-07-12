#include <stdio.h>

void func(int son) {

	printf("%d\n",son);

	if(son>1) {

		func(son - 1);
	}

		}
int main() {

	int a;

	printf("Son kiriting:");

	scanf("%d",&a);

	func(a);

	return 0;

	}
