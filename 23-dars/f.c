#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int son=10;
    int arr[son];

    for(int a=0; a<son; a++) {
        arr[a]=rand()%100;
    };
    FILE *file1=fopen("juft.bin", "wb");
    FILE *file2=fopen("toq.bin", "wb");

    for(int a=0; a<son;a++) {
        if(arr[a]%2==0) {
            fwrite(arr, sizeof(int),1,file1);
        } else fwrite(arr, sizeof(int),1,file2);
    }
    fclose(file1);
    fclose(file2);

    int juft[];
    int toq[];

    FILE *file3=fopen("juft.bin", "rb");
        fread(juft,sizeof(int),1,file3);
    FILE *file4=fopen("toq.bin", "rb");
        fread(toq,sizeof(int), 1,file4);

    fclose(file3);
    fclose(file4);

    return 0;
}