#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("%d ning faktoriali: %d\n", n, result);

    return 0;
}
