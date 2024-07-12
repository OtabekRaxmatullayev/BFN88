#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillMatrix (int n, int matrix[n][n]) {
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        matrix[i][j] = rand() % 10;
                }
        }
}

void printMatrix (int n, int matrix[n][n]) {
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("%2d  ", matrix[i][j]);
                }
                puts("");
        }
        puts("");
}

int main () {
        srand(time(NULL));

        int n = 5;

        int matrix1[n][n];
        int matrix2[n][n];
        int natija[n][n];

        fillMatrix(n, matrix1);
        fillMatrix(n, matrix2);

        printf("Matrix 1:\n");
        printMatrix(n, matrix1);

        printf("Matrix 2:\n");
        printMatrix(n, matrix2);

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        natija[i][j] = matrix1[i][j] + matrix2[i][j];
                }
        }

        printf("Natija:\n");
        printMatrix(n, natija);

        return 0;
}
