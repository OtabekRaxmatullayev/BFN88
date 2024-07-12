#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        srand(time(NULL));

        int n,max,min,c=0,d=0;
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

		max=yeah[0];

	for(int a=0;a<n;a++) {

		if(max<yeah[a]) {

			max=yeah[a];
			c=a;

	}

	}

		min=yeah[0];

	for(int a=0;a<n;a++) {

		if(min>yeah[a]) {

			min=yeah[a];
			d=a;

	}

	}

			puts("\n\nTahrirlangandan keyingi sonlar:");

		yeah[c]=min;
		yeah[d]=max;

	for(int a=0;a<n;a++) {

		printf("%3d,",yeah[a]);

	}

	}
