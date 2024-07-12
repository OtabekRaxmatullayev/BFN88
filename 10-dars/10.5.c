#include <stdio.h>
int main() {

        int yeah[100],n,max,min,j,k,l;

                printf(" Nechta son kiritmoqchisiz? ");
                scanf("%d",&n);

        for(int a=0;a<n;a++) {

                printf(" %d - indeksga qiymat kiriting: ",a);
                scanf("%d",&yeah[a]);
        }

                max=yeah[0];
		k=0;

        for(int a=0;a<n;a++) {

        if(yeah[a]>=max) {

                max=yeah[a];
                k=a+1;

	}
        
	}

		min=yeah[0];
		j=0;

	for(int a=0;a<n;a++) {

        if(yeah[a]<=min) {

                min=yeah[a];
                j=a+1;

	}

	}

	if(j>k)

		l=j-k-1;

	else 
		l=k-j-1;

		printf("%d",l);
        }

