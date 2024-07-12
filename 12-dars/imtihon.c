#include <stdio.h>
#include <stdlib.h>

void tozalash() {

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void printTanlov() {
    puts("");
    puts("Assalomu alaykum!\n");
    puts("Siz \"Liverpool vs Man City\" o'yini haqida ma'lumot olmoqchisiz\n");
    puts("Quyidagilardan birini tanlang:");
    puts("");
}

void printMenyu() {
    puts("");
    printf("1) Futbol uchun bo'sh o'rindiqlar\n");
    printf("2) Jamoalar haqida ma'lumotlar\n");
    printf("3) Chipta harid qilish\n");
    printf("4) Chiqish\n");
    puts("");
}

void printorindiqlar() {
    puts("Bo'sh o'rindiqlar:");
    int orindiqlar[12] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

    for (int i = 0; i < 12; i++) {
        printf("%d ", orindiqlar[i]);
    }
    printf("\nBand qilingan o'rindiqlar: 1 2 3 4 5 6\n");

    printf("\nNarxlar:\n");
    printf("1-qator: 100 ming. (1-6 gacha)\n");
    printf("2-qator: 75 ming. (7-12 gacha)\n");
    printf("3-qator: 50 ming. (13-18 gacha)\n");
}

void printmalumot() {
    puts("Jamoalarning oxirgi o'yinlari:\n");

    printf("Liverpool   3:2   Aston Villa    Man City   2:1   Burnly\n");
    printf("Arsenal     3:4   Liverpool      Man City   0:1   Newcastle\n");
    printf("Liverpool   2:0   Everton        Brenford   0:4   Man City\n");
    printf("Liverpool   5:0   Totenham       Crystall P 2:4   Man City\n");
    printf("West Ham    0:1   Liverpool      Luton      1:3   Man City\n");
    printf("Wolves      3:2   Liverpool      Man City   2:1   Man United\n");

    puts("Turnir jadvalidagi o'rni:\n");
    printf("Jamoalar       Ochkosi    To'plar nisbati\n");
    printf("1. Liverpool   48         +30\n");
    printf("3. Man City    44         +26\n");

    puts("Jamoalar tarkiblari:\n");
    printf("Liverpool                             Man City\n");
    printf("1. Alisson Becker - 1                 1. Ederson - 31\n");
    printf("2. Alexander-Arnold - 66              2. Kyle Walker - 2\n");
    printf("3. Virgil van Dijk - 4                3. Ruben Dias - 3\n");
    printf("4. Ibrahima Konate - 5                4. John Stones - 5\n");
    printf("5. Andy Robertson - 26                5. Joao Cancelo - 7\n");
    printf("6. Fabinho - 3                        6. Rodri - 16\n");
    printf("7. Jordan Henderson - 14              7. Kevin De Bruyne - 17\n");
    printf("8. Thiago Alcantara - 6               8. Ilkay Gundogan - 8\n");
    printf("9. Mohamed Salah - 11                 9. Bernardo Silva - 20\n");
    printf("10. Darwin Nunez - 9                  10. Phil Foden - 47\n");
    printf("11. Luis Diaz - 7                     11. Erling Haaland - 9\n");
}

void sotibolish() {
    int sotuv;
    printf("\nQaysi o'rindiqni xarid qilmoqchisiz? ");
    scanf("%d", &sotuv);

    int narx;
    if (sotuv >= 1 && sotuv <= 6) {
        narx = 100000;
    } else if (sotuv >= 7 && sotuv <= 12) {
        narx = 75000;
    } else if (sotuv >= 13 && sotuv <= 18) {
        narx = 50000;
    } else {
        printf("Noto'g'ri o'rindiq raqami! Iltimos, qayta urinib ko'ring.\n");
        return;
    }

    char javob;
    printf("O'rindiq narxi: %d \nSotib olasizmi? (h/y): ", narx);
    scanf(" %c", &javob);

    if (javob == 'h') {
        printf("Sizning chipta narxingiz %d bo'ldi. Tashakkur!\n", narx);
    } else if (javob == 'y') {
        printf("Sotib olish bekor qilindi. Chipta uchun pulingiz qaytarildi.\n");
    } else {
        printf("Noto'g'ri javob! Iltimos, qayta urinib ko'ring.\n");
    }
}

int main() {
    printTanlov();

    int son;

    do {
        printMenyu();
        scanf("%d", &son);

        switch (son) {
            case 1:
		tozalash();
                printorindiqlar();
                break;
            case 2:
		tozalash();
                printmalumot();
                break;
            case 3:
		tozalash();
                sotibolish();
                break;
            case 4:
		tozalash();
                printf("Chiqish...\n");
                break;
            default:
                printf("Noto'g'ri tanlov! Iltimos, qayta urinib ko'ring.\n");
        }
    } while (son != 4);

    return 0;
}
