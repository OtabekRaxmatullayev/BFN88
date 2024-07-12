#include <stdio.h>

typedef struct {
    char ismi[50];
    int yoshi;
    int kursi;
    char oqish_turi[50];
} Student;

Student students[7] = {
    {"Ali", 20, 1, "Kunduzgi"},
    {"Vali", 22, 2, "Kunduzgi"},
    {"Eshmat", 23, 3, "Kunduzgi"},
    {"Toshmat", 21, 2, "kechki"},
    {"Jo'rabek", 24, 4, "sirtqi"},
    {"Aziz", 22, 2, "Kunduzgi"},
    {"Sardor", 25, 5, "kechki"}
};

void func() {

    for (int i = 0; i < 7; i++) {
        if (students[i].kursi == 2 && students[i].yoshi >= 22) {
            printf("Ismi: %s, Yoshi: %d, O'qish turi: %s\n", students[i].ismi, students[i].yoshi, students[i].oqish_turi);
        }
    }
}

int main() {
    
    func();

    return 0;
}
