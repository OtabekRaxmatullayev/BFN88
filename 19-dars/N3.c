#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char nomi[32];
    char tili[32];
    char dini[32];
    char poytaxti[64];
    char pul_birligi[32];
    char prezidenti[64];
    char qita[64];
    short shaharlar_soni;
    int aholi_soni;
    int maydoni;
} DAVLAT;

void func1(DAVLAT *user) {
    printf("\n");
    printf("Nomi:                    %s\n", user->nomi);
    printf("Davlat tili:             %s\n", user->tili);
    printf("Dini :                   %s\n", user->dini);
    printf("Poytaxti:                %s\n", user->poytaxti);
    printf("Pul birligi:             %s\n", user->pul_birligi);
    printf("Prezidenti:              %s\n", user->prezidenti);
    printf("Joylashgan qit'asi:      %s\n", user->qita);
    printf("Shaharlar soni:          %hd\n", user->shaharlar_soni);
    printf("Aholisi soni:            %d\n", user->aholi_soni);
    printf("Maydoni: (km^2)          %d\n", user->maydoni);
}

int main () {
    DAVLAT user1 = {"O'zbekiston", "O'zbek", "Islom", "Toshkent", "So'm", "Shavkat Mirziyoyev", "Osiyo", 30, 34700000, 448978};
    DAVLAT user2 = {"AQSH", "Ingliz", "Protestantizm", "Vashington", "AQSH Dollari", "Joe Biden", "Shimoliy Amerika", 20000, 331000000, 9833520};
    DAVLAT user3 = {"Germaniya", "Nemis", "Xristiyanlik", "Berlin", "Yevro", "Angela Merkel", "Yevropa", 2056, 83100000, 357021};
    DAVLAT user4 = {"Avstraliya", "Ingliz", "Kristian", "Kanberra", "Avstraliya Dollari", "Scott Morrison", "Avstraliya", 20, 25800000, 7692024};
    DAVLAT user5 = {"Rossiya", "Rus", "Ortodoks", "Moskva", "Rus Rubli", "Vladimir Putin", "Evrasiya", 30, 146700000, 17098242};

    if (user1.aholi_soni > 30000000) {
        func1(&user1);
    }
    if (user2.aholi_soni > 30000000) {
        func1(&user2);
    }
    if (user3.aholi_soni > 30000000) {
        func1(&user3);
    }
    if (user4.aholi_soni > 30000000) {
        func1(&user4);
    }
    if (user5.aholi_soni > 30000000) {
        func1(&user5);
    }

    return 0;
}
