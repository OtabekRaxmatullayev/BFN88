#include <stdio.h>

void func( int *a, int *b) {
    int c=*a;
    *a=*b;
    *b=c;
 }

int main () {
    int son1, son2;

    printf(" 1-sonni kiriting\n");
    scanf("%d",&son1);
    printf("2-sonni kiriting\n");
    scanf("%d",&son2);

    func(&son1, &son2);

    printf("%d\n", son1);
    printf("%d\n", son2);

    return 0;
}