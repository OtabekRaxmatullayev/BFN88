#include <stdio.h>

int func(int a, int b, int c) {

	if (a + b == c) {

		return 1;

	} else {

		return 0;

	}

	}

int main() {

	int a, b, c;

		scanf("%d %d %d", &a, &b, &c);

	int d=func(a, b, c);

		printf("\n%d\n",d);

    return 0;
}
