#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char soz[100];

    printf("So'zni kiriting: ");
    scanf("%s", soz);

    int length = strlen(soz);

    FILE *file = fopen("reverse.txt", "w");
    
      for (int i = 0; i < length; i++) {
        if (islower(soz[i])) {
            fputc(toupper(soz[i]), file);
        } else if (isupper(soz[i])) {
            fputc(tolower(soz[i]), file);
        } else {
            fputc(soz[i], file);
        }
    }

    fclose(file);
    return 0;
}
