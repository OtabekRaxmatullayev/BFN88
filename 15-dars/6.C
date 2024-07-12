#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func1 (int n, int yeah[n][n]) {
        for (int a = 0; a < n; a++) {
                for (int b = 0; b < n; b++) {
                        yeah[a][b] = rand() % 100-50;
                }
        }
}

void func2 (int n, int yeah[n][n]) {
        for (int a = 0; a < n; a++) {
                for (int b = 0; b < n; b++) {
                        printf("%3d ", yeah[a][b]);
                }
                puts("");
        }
        puts("");
                for (int a = 0; a < n; a++) {
                    int temp = yeah[a][a];
                        yeah[a][a] = yeah[a][n-a-1];
                        yeah[a][n-a-1] = temp;
            }
         for (int a = 0; a < n; a++) {
                for (int b = 0; b < n; b++) {
                        printf("%3d ", yeah[a][b]);
                }
                puts("");
         }
        }
int main () {
        srand(time(NULL));

        int n;
                scanf("%d",&n);
        int matrix[n][n];

        func1 (n, matrix);
        printf("Matritsa:\n");
        func2 (n, matrix);

        return 0;
}
