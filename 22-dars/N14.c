#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("text.txt", "w+"); 
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    fprintf(file, " adffd pkjh pjf hfkjslm pj ehw efclm "); 

    rewind(file); // Faylni boshidan boshlab o'qish uchun kursorini faylning boshiga o'rnatamiz

    char soz[64];

    while (fscanf(file, "%s", soz) == 1) {
        if (soz[0] == 'p' || soz[0] == 'P') { // Bosh harf "p" yoki "P" bo'lsa
            printf("%s\n", soz); // Ekranga chiqaramiz
        }
    }

    fclose(file);

    return 0;
}
