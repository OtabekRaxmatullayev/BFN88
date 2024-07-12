#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    FILE *file = fopen("text.txt", "w");
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    fprintf(file, "Kichik bir yaxshilik qilgandim kecha,\n"
                  "Bir zum o'yga toldi bu qaro qalbim.\n"
                  "Qilgan ishim madh aylab o'zicha,\n"
                  "Tog'larcha gunohni unutib toldim.\n"
                  "\n"
                  "Bu ne dersiz endi, balki qalb ko'zim\n"
                  "Ko'rlikka yuz tutgan, gumonsiz, shaksiz.\n"
                  "Faxshdan nari kelmas har aytgan so'zim,\n"
                  "Guruchlar ichinda biz bir kurmakmiz.\n"
                  "\n"
                  "Ajabo, insoniyat ne uchun na deb,\n"
                  "Da'vo qilar aql va ong ne'matin.\n"
                  "Jimittay savobin ko'rarkan ha deb,\n"
                  "Osmoncha gunohlar to'kar savlatin!\n"
                  "\n"
                  "Asli tug'ilgandir bu misralar ham\n"
                  "Riyo atalgan bir zalolat bog'da.\n"
                  "Demakki, Jannat yo'q, tayyor Jahannam,\n"
                  "Bu qalblar o'lgandir, o'lgan shu chog'da.\n");

    fclose(file);

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Xatolik: Faylni ochishda muammo.\n");
        return 1;
    }

    char soz1[128]; 
    char soz2[128]; 
    int max_soz = 0;

   
    while (fscanf(file, "%s", soz2) == 1) {
        int length = strlen(soz2); 
        if (length > max_soz) { 
            max_soz = length;
            strcpy(soz1, soz2); 
        }
    }

    
    fclose(file);

    printf("Eng uzun so'z: %s\n", soz1);

    return 0;
}
