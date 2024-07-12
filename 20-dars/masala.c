#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


bool unlimi(char harf) {
    harf = tolower(harf);
    if (
        harf == 'a' || harf == 'i' || harf == 'u' ||
        harf == 'o' || harf == 'e'
    ) {
        return true;
    }
    return false;
}

int main () {

    FILE *file = fopen("royxat.txt", "w");

    char gap[64] = "";
    scanf("%[^\n]s", gap);

    for (int i = 0; i < strlen(gap); i++) {
        if ( unlimi(gap[i]) ) {
            fputc(gap[i], file);
        }
    }
    fputc('\n', file);

    for (int i = 0; i < strlen(gap); i++) {
        if (unlimi(gap[i]) == false && isalpha(gap[i])) {
            fputc(gap[i], file);
        }
    }

    fclose(file);
    return 0;
}
