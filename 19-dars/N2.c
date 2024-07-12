#include <stdio.h>
#include <stdbool.h>
#include <string.h>  // strcmp funksiyasi uchun kerak

typedef struct {
    char ism[32];
    char familiya[32];
    short yosh;
    bool jins;
    char kasbi[64];
    char shahar[32];
    bool oila;
    char millat[32];
    char passport_seriya[16];
    unsigned long long tel_raqam;  // uzun raqamlarni saqlash uchun
} ODAM;

void func1(ODAM *user) {

    if (strcmp(user->kasbi, "Dasturchi") == 0) {

        printf("\n");
        printf("Ismi:           %s\n", user->ism);
        printf("Familiyasi:     %s\n", user->familiya);
        printf("Yoshi:          %hd\n", user->yosh);
        printf("Jinsi:          %s\n", user->jins ? "Erkak" : "Ayol");
        printf("Kasbi:          %s\n", user->kasbi);
        printf("Shahri:         %s\n", user->shahar);
        printf("Oilali:         %s\n", user->oila ? "Ha" : "Yo'q");
        printf("Millati:        %s\n", user->millat);
        printf("Passport seriya: %s\n", user->passport_seriya);
        printf("Telefon raqami: %llu\n", user->tel_raqam);  // format specifier for unsigned long long

    }
}

int main () {

    ODAM user1 = {"Otabek", "Raxmatullayev", 19, true, "Dasturchi", "Chiroqchi", false, "O'zbek", "ok 20050831", 998908893205ULL };
    ODAM user2 = {"Fan", "Zhendong", 27, true, "Stol tennischi", "Guanchjou", false, "Xitoy", "NG 1997", 86123321123ULL };

    func1(&user1);
    func1(&user2);

    return 0;
}
