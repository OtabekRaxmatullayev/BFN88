#include <stdio.h>
#include <string.h>

int main() {
    char ism[32];

    printf("Ismingizni kiriting: ");
    scanf("%s", ism);

    int length = strlen(ism);

    FILE *file = fopen("teskari.txt", "w");
   
    for (int i = length - 1; i >= 0; i--) {
        fputc(ism[i], file);
    }

    fclose(file);
    return 0;
}
