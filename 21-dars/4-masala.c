#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Nechta random son kiritmoqchisiz? ");
    scanf("%d", &N);

    FILE *file = fopen("random.txt", "w");
   
    srand(time(0));  

    for (int i = 0; i < N; i++) {
        int randomNumber = rand(); 
        fprintf(file, "%d\n", randomNumber);
    }

    fclose(file);
    return 0;
}
