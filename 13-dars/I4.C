#include <stdio.h>

void func(int a[], int b) {
    int c = a[0], d = a[0];
    int c_index = 0, d_index = 0;

    for (int i = 1; i < b; i++) {
        if (a[i] > c) {
            c = a[i];
            c_index = i;
        }
        if (a[i] < d) {
            d = a[i];
            d_index = i;
        }
    }

    if (d_index < c_index) {
        printf("Min element oldin keladi\n");
    } else if (c_index < d_index) {
        printf("Max element oldin keladi\n");
    } else {
        printf("Min va Max elementlar bir xil indeksda\n");
    }
}

int main() {
    int b;

    printf("Elementlar sonini kiriting: ");
    scanf("%d", &b);

    int a[b];

    printf("Elementlarni kiriting: ");
    for (int i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }

    func(a, b);

    return 0;
}
