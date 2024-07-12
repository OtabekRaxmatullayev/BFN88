#include <stdio.h>

void func(int *son) {

    if(*son >=10 && *son <= 99) {
        printf("%d%d", *son%10, *son/10);
    } else printf(" 2 xonali son kiriting!");
}

int main () {

    int a;
    printf(" Son kiriting: ");
    scanf("%d",&a);

    func(&a);

    return 0;
}