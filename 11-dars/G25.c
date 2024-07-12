#include <stdio.h>

void bubbleSort(int yeah[],int n) {


	for(int a=0;a<n;a++) {

		for(int b=a+1;b<n;b++) {

			if(yeah[a]>yeah[b]) {

				int d=yeah[a];
				yeah[a]=yeah[b];
				yeah[b]=d;
			}

		}

	}

}

void printArray(int yeah[], int n) {

	puts("");


	for(int a=0;a<n;a++) {


		printf("%d ,", yeah[a]);

	}

		puts("");
	}

int main() {

	int k=0;
	int son[100];
	int yeah[]={-4,43,75,6,1,8,-3,-7,10};

	int n=sizeof(yeah)/sizeof(yeah[0]);


		printArray(yeah,n);
		bubbleSort(yeah,n);
		printArray(yeah,n);


	for(int a=0;a<n;a += 2) {

		son[a]=yeah[k++];

	}

	for(int a=1;a<n;a += 2) {

		son[a]=yeah[k++];

	}
	for(int a=0;a<n;a++) {

		printf("%3d,",son[a]);

	}

	}
