#include <stdio.h>

void func(int son) {

	if(son%2==0) {

        printf("%d\n",son);

	}

        if(son>1) {

                func(son - 1);
        }

                }
int main() {

        int a;

        printf("Son kiriting:");

        scanf("%d",&a);

        func(a-1);

        return 0;

        }
