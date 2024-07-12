#include <stdio.h>

void func( int *son) {
    
    *son= *son * (*son);

}

int main() {

    int a;

    printf("son kiriting\n");
    scanf("%d",&a);

    func(&a);
    printf("%d",a);

    return 0;
}