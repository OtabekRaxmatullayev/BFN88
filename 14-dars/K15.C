#include <stdio.h>
int main() {

        int n,m,c,d=0;

                printf("Ustun va qatorlar sonini kiriting:\n");
                scanf("%d%d",&n,&m);

        int yeah[n][m]={};

        for(int a=0;a<n;a++) {

                for(int b=0;b<m;b++) {

                        printf("%d - ustundagi %d - indeksga qiymat kiriting:",a,b);
                        scanf("%d",&c);
                        yeah[a][b]=c;
        }

        }

        int e=0;

        for(int a=n-1;a>=0 && !e;a--) {

                for(int b=m-1;b>=0;b--) {

                        if(yeah[a][b]<0) {

                                e=1;
                                break;

        }
                if(d!=0) {

                        printf("+");

        }
                        printf("%d",yeah[a][b]);

                        d += yeah[a][b];
        }

        }
                                printf("=%d",d);
        }

