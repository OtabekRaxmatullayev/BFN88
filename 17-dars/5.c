#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100] = "";
    int harflar = 0, belgilar = 0, raqamlar = 0, probillar = 0;

    printf("So'z kiriting:\n");
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            harflar++;
        } else if (isspace(text[i])) {
            probillar++;
        } else if (isdigit(text[i])) {
            raqamlar++;
        } else {
            belgilar++;
        }
    }

    printf("Harf soni: %d\n", harflar);
    printf("Probil soni: %d\n", probillar);
    printf("Raqam soni: %d\n", raqamlar);
    printf("Belgilar soni: %d\n", belgilar);

    return 0;
}
