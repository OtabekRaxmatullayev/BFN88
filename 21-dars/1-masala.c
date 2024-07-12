#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char nomi[32];
    char brendi[32];
    short yili;
    int narxi;
} CAR;

void func(CAR car, FILE *file) {

    fprintf(file, "%s  ", car.nomi);
    fprintf(file, "%s  ", car.brendi);
    fprintf(file, "%hd  ", car.yili);
    fprintf(file, "%d\n", car.narxi);
}

int main() {
    CAR cars[] = {
        {"Civic", "Honda", 2020, 20000},
        {"Model S", "Tesla", 2021, 80000},
        {"Corolla", "Toyota", 2019, 18000},
        {"Mustang", "Ford", 2018, 35000},
        {"Camry", "Toyota", 2022, 25000}
    };
    int length = sizeof(cars) / sizeof(cars[0]);

    FILE *file = fopen("car.txt", "w");

    for (int i = 0; i < length; i++) {
        func(cars[i], file);
    }

    fclose(file);
    return 0;
}
