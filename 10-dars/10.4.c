#include <stdio.h>
int main() {

        int yeah[100],n,min,k;

                printf(" Nechta son kiritmoqchisiz? ");
                scanf("%d",&n);

        for(int a=0;a<n;a++) {

                printf(" %d - indeksga qiymat kiriting: ",a);
                scanf("%d",&yeah[a]);
        }

                min=yeah[0];

        for(int a=0;a<n;a++) {

        if(yeah[a]<min) {

                min=yeah[a];
                k=a;

        }

        }

		printf("minimaldan oldingi sonlar soni = %d ",k);

        }
