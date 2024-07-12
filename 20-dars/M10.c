#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char aeroport_nomi[64];
    char samalyot_nomi[32];
    char uchish_sanasi[16];
    char uchish_soati[8];
    char uchish_shahri[32];
    char qonish_shahri[32];
    short yolovchi_soni;
    short yuk;
    short parvoz_soati;
    short uchish_oyi;
} AEROPORT;

void func1(AEROPORT *samalyot) {
    puts("");
    printf("Aeroport nomi:  %s\n", samalyot->aeroport_nomi);
    printf("Samalyot nomi:  %s\n", samalyot->samalyot_nomi);
    printf("Uchish shahri:  %s\n", samalyot->uchish_shahri);
    printf("Uchish sanasi:  %s\n", samalyot->uchish_sanasi);
    printf("Uchish soati:  %s\n", samalyot->uchish_soati);
    printf("Qo'nish shahri:  %s\n", samalyot->qonish_shahri);
    printf("Yo'lovchilar soni:  %hd\n", samalyot->yolovchi_soni);
    printf("Maksimal yuk: %hd kg\n", samalyot->yuk);
    printf("Parvoz soati: %hd soati\n", samalyot->parvoz_soati);
}

void func2(AEROPORT *samalyot) {
    printf("\nAeroport nomini kiriting:");
    scanf(" %[^\n]", samalyot->aeroport_nomi);
    printf("Samalyot nomini kiriting:");
    scanf(" %[^\n]", samalyot->samalyot_nomi);
    printf("Uchish shahrini kiriting:");
    scanf(" %[^\n]", samalyot->uchish_shahri);
    printf("Uchish sanasini kiriting:");
    scanf(" %[^\n]", samalyot->uchish_sanasi);
    printf("Uchish soatini kiriting:");
    scanf(" %[^\n]", samalyot->uchish_soati);
    printf("Qo'nish shahrini kiriting:");
    scanf(" %[^\n]", samalyot->qonish_shahri);
    printf("Yo'lovchilar sonini kiriting:");
    scanf("%hd", &samalyot->yolovchi_soni);
    printf("Maksimal yukni kiriting (kg):");
    scanf("%hd", &samalyot->yuk);
    printf("Parvoz soatini kiriting:");
    scanf("%hd", &samalyot->parvoz_soati);
}

int main() {
    printf("Uchish sanasi va soat quyidagicha kiritiladi:\n");
    printf("kun.oy.yil sanasi, 11.10.2024\nminut:soat soati, 11:55\n\n");

    int n;
    printf("Samalyotlar sonini kiriting: ");
    scanf("%d", &n);

    AEROPORT *samalyotlar = malloc(n * sizeof(AEROPORT));

    for (int a = 0; a < n; a++) {
        printf("\n%d - samalyot ma'lumotlarini kiriting:\n", a + 1);
        func2(&samalyotlar[a]);
    }

    for (int a = 0; a < n; a++) {
        if (strcmp(samalyotlar[a].uchish_shahri, "Toshkent") == 0 &&
            (samalyotlar[a].parvoz_soati >= 2 && samalyotlar[a].parvoz_soati <= 3)) {
            func1(&samalyotlar[a]);
        }
    }

    free(samalyotlar);

    return 0;
}

