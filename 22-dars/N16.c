#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("text.txt", "w");
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }
    
    fprintf(file, "Sizlardan iltimosim muslima qizlar,\n"
                  "Also qo‘ymang rasmingizni tarmoqlarga.\n"
                  "Ro‘mol o‘rab Allohni siz suyubsizlar,\n"
                  "Mahramlarni qo‘ymang og‘ir so‘roqlarga.\n");

    fclose(file);

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    char word[100];

    while (fscanf(file, "%s", word) == 1) {
        if (strlen(word) < 5) {
            printf("%s\n", word);
        }
    }

    fclose(file);

    return 0;
}
