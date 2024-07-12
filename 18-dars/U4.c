#include <stdio.h>

void func(int son) {

	if(son>1) {

		func(son-1);

                }

        if(son%2==1) {

		printf("%d\n",son);

        }

}
int main() {

        int a;

        printf("Son kiriting:");

        scanf("%d",&a);

        func(a-1);

        return 0;

        }
