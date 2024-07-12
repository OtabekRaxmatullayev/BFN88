#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand(time(NULL));

        int yeah[100],n,k,ort;

                printf("Uzunlikni kiriting: ");
                scanf("%d",&n);

	for(int a=0;a<n;a++) {

		yeah[a]=rand()%999+1;

		printf(" %d\n",yeah[a]);
	}

		k=0;

	for(int a=0;a<n;a++) {

		k=k+yeah[a];

	}

		ort=0;
		ort=k/n;

	printf("o'rtachasi = %d",ort);

	}
