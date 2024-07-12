#include <stdio.h>

int main() {
    int n;
    printf("Qatorlar va ustunlar sonini kiriting:\n");
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d - qator %d - ustun elementini kiriting: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int temp = matrix[0][i];
        matrix[0][i] = matrix[i][0];
        matrix[i][0] = temp;
    }

    printf("Natija:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

}

