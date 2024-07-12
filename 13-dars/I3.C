#include <stdio.h>
#include <stdlib.h>

char func(char a) {
    char yeah[] = {'a', 'e', 'i', 'o', 'u'};
    int b = abs(a - yeah[0]);
    char c = yeah[0];

    for (int i = 1; i < 5; i++) {
        int d = abs(a - yeah[i]);
        if (d < b) {
            b = d;
            c = yeah[i];
        }
    }

    return c;
}

int main() {
    char a;
    printf("Iltimos, kichik harf kiriting: ");
    scanf(" %c", &a);

    if (a < 'a' || a > 'z') {
        printf("Noto'g'ri kiritish. Iltimos, kichik harf kiriting.\n");
        return 1;
    }

    char c = func(a);
    printf("Eng yaqin unli harf: %c\n", c);

    return 0;
}
