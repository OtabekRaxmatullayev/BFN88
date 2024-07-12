#include <stdio.h>

void func(int son) {
    int yeah[32];
    int a = 0;

    while (son > 0) {
        yeah[a] = son % 2;
        son = son / 2;
        a++;
    }

    for (int i = a - 1; i >= 0; i--) {
        printf("%d", yeah[i]);
    }

    printf("\n");
}

int main() {
    int son;

    scanf("%d", &son);

    if (son == 0) {
        printf("0\n");
    } else {
        func(son);
    }

    return 0;
}
