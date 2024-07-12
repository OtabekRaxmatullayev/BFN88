#include <stdio.h>
int main() {

        int yeah[100],n,max,k;

                printf(" Nechta son kiritmoqchisiz? ");
                scanf("%d",&n);

        for(int a=0;a<n;a++) {

                printf(" %d - indeksga qiymat kiriting: ",a);
                scanf("%d",&yeah[a]);
        }

		max=yeah[0];

	for(int a=0;a<n;a++) {

	if(yeah[a]>max) {

		max=yeah[a];
		k=a;

	}

	}

		printf("maksimaldan keyingi sonlar soni = %d ",n-1-k);

	}
