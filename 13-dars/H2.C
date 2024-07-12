#include <stdio.h>

void func(int *a, int *b) {

	*b=(*a)*(*a);
}

int main() {

	int a;
	int b;

		scanf("%d",&a);

		func(&a,&b);

    printf("\n%d\n",b);

    return 0;
}

