#include <stdio.h>

int func(int n) {
    if (n < 10)
        return 1;
    return 1 + func(n / 10);
}

int main() {
    int number;

    printf("Sonni kiriting: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    int count = func(number);
    printf("Kiritilgan son %d xonali.\n", count);

    return 0;
}
