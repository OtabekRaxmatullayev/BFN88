#include <stdio.h>

int main() {
    char str[128];
    int count = 0;

    printf("Satrni kiriting: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            count++;
        }
    }

    printf("Natija = %d\n", count);

    return 0;
}
