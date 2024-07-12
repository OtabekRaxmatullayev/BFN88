#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("Matritsa o'lchamini kiriting (N): ");
    scanf("%d", &N);

    int matrix[N][N];
    int diagonal1 = 0;
    int diagonal2 = 0;

    srand(time(0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%d ", matrix[i][j]);
            if (i == j) {
                diagonal1 += matrix[i][j];
            }
            if (i + j == N - 1) {
                diagonal2 += matrix[i][j];
            }
        }
        printf("\n");
    }

    int result = diagonal1 + diagonal2;
    printf("Natija = %d\n", result);

    return 0;
}
