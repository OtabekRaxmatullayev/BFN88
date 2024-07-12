#include <stdio.h>
int main() {

	int sum=0;
	int yeah[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	for(int a=0;a<4;a++) {

		for(int b=0;b<4;b++) {

			sum +=yeah[a][b];

			printf("%2d ",yeah[a][b]);

	}

			printf("\n");

	}

			printf("\nyig'indisi = %d",sum);

	}

