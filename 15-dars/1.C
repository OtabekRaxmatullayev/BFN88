#include <stdio.h>
int main() {

	int n=3, m=4;
	int yeah[n][m]={};

	for(int a=0;a<n;a++) {
		for(int b=0;b<m;b++) {
			printf("%d-ustunning %d-indeksiga qiymat kiritng:",a,b);
				scanf("%d",&yeah[a][b]);
				yeah[a][b]=yeah[a][b];
		}
	}
                for(int b=0;b<m;b++) {
			printf("%3d",yeah[0][b]);
	}
		}
