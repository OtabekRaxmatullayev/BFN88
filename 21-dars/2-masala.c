#include <stdio.h>

int main() {
    int n;
    printf("Son kiting: ");
    scanf("%d", &n);

    FILE *file = fopen("sonlar.txt", "w");
   
    for (int i = 1; i <= n; i++) {
        fprintf(file, "%d\n", i);
    }

    fclose(file);
    return 0;
}
