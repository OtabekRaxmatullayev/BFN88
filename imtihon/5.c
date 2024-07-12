#include <stdio.h>

void func(float *son) {

    printf("%d", (int) *son);

}
int main() {

    float a;
    printf(" Float tipida son kiriting:");
    scanf("%f", &a);

    func(&a);
    return 0;    
}