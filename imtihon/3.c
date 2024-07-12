#include <stdio.h>

void func(int *son) {

    printf("%p", &son);

}

int main() {

    int a;

    printf("Son kiriting: ");
    scanf("%d",&a);

    func(&a);

    return 0;    
}