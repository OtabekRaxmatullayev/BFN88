#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("text.txt", "w+"); 
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    fprintf(file, " salomat, is nima gap, chotkimi?, is is "); 

    rewind(file); 
    char soz1[128];
    const char soz2[] = "is";
    int count = 0;

    while (fscanf(file, "%s", soz1) == 1) { 
        if (strcmp(soz1, soz2) == 0) { 
            count++; 
        }
    }

    fclose(file);

    printf("Matnda 'is' so'zi %d mart ishlatilgan.\n", count);

    return 0;
}
