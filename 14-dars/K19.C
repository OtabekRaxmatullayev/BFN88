#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int n;

		printf("Utun va satrlar sonini kiriting:\n");
		scanf("%d",&n);

	int yeah[n][n];

	for(int a=0;a<n;a++) {

		for(int b=0;b<n;b++) {

			yeah[a][b]=rand()%10 +0;

		}

	}

	for(int a=0;a<n;a++) {

                for(int b=0;b<n;b++) {

			printf("%d",yeah[a][b]);

		}

		printf("\n");
	}


