#include <stdio.h>
int main() {

	int n;

		puts("Nechta son kiritmoqchisiz-");

		scanf("%d",&n);

	int yeah[n];

	for(int a=0;a<n;a++) {

		printf("%d - indeksga qiymat kiriting -",a);
			scanf("%d",&yeah[a]);

	}

	for(int a=0;a<n-1;a++) {

		if(yeah[a]==yeah[a+1]) {

			yeah[a]=2*yeah[a];
			yeah[a+1]=0;

	}

	}

	int k=0;

	for(int a=0;a<n;a++) {

		if(yeah[a]!=0) {

			yeah[k]=yeah[a];
			k++;

	}

	}

	for(int a=k;a<n;a++) {

		yeah[a]=0;
	}

	for(int a=0;a<n;a++) {

		printf("%3d",yeah[a]);

	}

	}








