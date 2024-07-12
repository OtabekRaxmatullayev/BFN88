#include <stdio.h>
int main() {

        int n=3,m=4,c;
	int yeah[n][m]={};

        for(int a=0;a<n;a++) {

                for(int b=0;b<m;b++) {

			printf("%d - ustundagi %d - indeksga qiymat kiriting: ",a,b);
			scanf("%d",&c);
			yeah[a][b]=c;
	}

	}

        for(int a=0;a<n;a++) {

                for(int b=0;b<m;b++) {

			if(b%2==1) {

				printf("%4d ",yeah[a][b]);

	}

	}

				printf("\n");

	}

	}
