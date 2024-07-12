#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "w+"); 
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    fprintf(file, " Ba'zan g'aflatimni his qilgan chog'im,\n"
                  "Hayolimga kelar quyidagi so'zlar:\n"
                  "\"Endi men hidoyat topmasam kerak,\n"
                  "Gunohga to'lgaydir bu qaro ko'zlar\"\n"
                  "Lek bir vaqt qandaydir tuyg'ular illo,\n"
                  "Boshlaydir qalbimni sakinat sari.\n"
                  "Qo'limdan tutibon aytib Bismillo,\n"
                  "Qorong'u zulmatni etadi nari.\n"
                  "Shu vaqt o'yga tolar aqlim bo'lib lol,\n"
                  "Nafs botqog'ida edi sal oldin.\n"
                  "Qandaydir uch sekund o'tibon nogoh,\n"
                  "Ibodat ila men yuzlanib qoldim.\n"
                  "Har g'aflatimda bo'lar shu holat,\n"
                  "Har gal osiylikda takror aylaydi.\n"
                  "\"Nafsingni qul qilib ko'rsat jasorat,\n"
                  "Onang duosi ham bir kun tugaydi!\"\n"
                  "Qissadan-hissa, xulosa shuki,\n"
                  "Onalar duolar qilarkan to'lib,\n"
                  "G'aflat botqog'ida qolmaymiz toki,\n"
                  "Alloh rahmatidam umidvor bo'lib...\n");

    fclose(file);

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    int son = 0;
    char a[100];

    while (fgets(a, sizeof(a), file) != NULL) {
        printf("%s", a); 
        son++; 
    }

    printf("\nFaylda %d ta qator mavjud.\n", son);

    fclose(file);

    return 0;
}
