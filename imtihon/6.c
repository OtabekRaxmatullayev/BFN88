#include <stdio.h>

void func(int *a, int *b, int *c) {

    if(*a+(*b)==*c) 
        printf("1");
    else printf("0");
}

int main() {

    int son1, son2, son3;

    printf("Sonlarni kiriting:\n");
    scanf("%d%d%d", &son1, &son2, &son3);

    func(&son1,&son2,&son3);

    return 0;
}