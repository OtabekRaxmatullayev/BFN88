#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;
    
    swap(&a, &b);
    
    printf("%d, %d\n", a, b);
    
    return 0;
}
