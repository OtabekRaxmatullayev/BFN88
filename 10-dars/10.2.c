#include <stdio.h>
int main() {

        int yeah[100],n;

		printf(" Nechta son kiritmoqchusiz? ");
		scanf("%d",&n);

        for(int a=0;a<n;a++) {

                printf(" %d - indeksga qiymat kiriting: ",a);
                scanf("%d",&yeah[a]);
        }

		yeah[0]=yeah[n-1]+yeah[0];
		yeah[n-1]=yeah[0]-yeah[n-1];
		yeah[0]=yeah[0]-yeah[n-1];

	for(int a=0;a<n;a++) {

		printf("%d\n",yeah[a]);

	}

	}
