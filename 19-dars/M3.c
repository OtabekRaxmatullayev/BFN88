#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 64

typedef struct {
    char nomi[MAX_LENGTH];
    char model[MAX_LENGTH];
    int yil;
    bool yuqori;
} Car;

void getCarInfo(Car *car) {
    printf("Mashina nomi: ");
    scanf("%s", car->nomi);
    printf("Mashina modeli: ");
    scanf("%s", car->model);
    printf("Ishlab chiqarilgan yili: ");
    scanf("%d", &car->yil);
    printf("Yuqori klassdami (1 - ha, 0 - yo'q): ");
    scanf("%d", &car->yuqori);
}

void printBMW(Car *cars, int size) {
    printf("\nBMW mashinalari:\n");
    for (int i = 0; i < size; ++i) {
        if (strcmp(cars[i].nomi, "BMW") == 0) {
            printf("Mashina nomi: %s\n", cars[i].nomi);
            printf("Mashina modeli: %s\n", cars[i].model);
            printf("Ishlab chiqarilgan yili: %d\n", cars[i].yil);
            printf("Yuqori klassdami: %s\n", cars[i].yuqori ? "Ha" : "Yo'q");
        }
    }
}

int main() {

    Car cars[5];

    for (int i = 0; i < 5; ++i) {
        printf("Mashina #%d ma'lumotlarini kiriting:\n", i + 1);
        getCarInfo(&cars[i]);
    }

    printBMW(cars, 5);

    return 0;
}
