#include <stdio.h>
int main () {

    FILE *file1=fopen("fayl1.txt", "w");
    FILE *file2=fopen("fayl2.txt", "r");

    char soz[]={};

    printf("So'z kiriting:\n");
    scanf("%s",soz);
    fprintf(file1, soz);

    int length=sizeof(soz);
    while()
}