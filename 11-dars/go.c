#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int n;
		printf("Kiritmoqchi bo'lgan sonlaringiz soni - ");
		scanf("%d",&n);

	int yeah[n];

	for(int a=0;a<n;a++) {

		yeah[a]=rand()%81-11;

	}
		puts("Randon tanlab bergan sonlar: ");

	for(int a=0;a<n;a++) {

		printf("%3d,",yeah[a]);

	}

		puts("\no'ngga necha xona surmoqchisiz?");

	int k;
		scanf("%d",&k);

	int son[n];

	for(int a=0;a<n-k;a++) {

		son[a]=yeah[a+k];
	}

	for(int a=0;a<k;a++) {

                son[n-k+a]=yeah[a];
        }

	for(int a=0;a<n;a++) {

		printf("%3d,",son[a]);

	}

	}
