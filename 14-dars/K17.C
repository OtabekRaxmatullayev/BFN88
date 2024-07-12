#include <stdio.h>
int main() {

        int n,c;

		printf("Ustun va qatorlar sonini kiriting:\n");
		scanf("%d",&n);

        int yeah[n][n]={};

        for(int a=0;a<n;a++) {

                for(int b=0;b<n;b++) {

                        printf("%d - ustundagi %d - indeksga qiymat kiriting:",a,b);
                        scanf("%d",&c);
                        yeah[a][b]=c;
        }

        }

        for(int a=0;a<n;a++) {

                for(int b=0;b<n;b++) {

                       printf("%4d ",yeah[b][a]);

        }

                                printf("\n");

        }

        }
