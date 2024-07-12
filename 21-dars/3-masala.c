#include <stdio.h>

int main() {
    int n;

    printf(" son kiriting: ");
    scanf("%d", &n);

    FILE *file = fopen("juftlar.txt", "w");

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { 
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);
    return 0; 
}