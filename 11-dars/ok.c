#include <stdio.h>
int main() {

	int a=0,d=0;

	int yeah[100]={88, 85, 96, 81, 39, 12, 4, 56, 2, 13, 31, 51, 54, 21, 5, 48, 28, 57, 40, 44, 55, 74, 80, 94, 17, 61, 47, 1, 10, 27, 83, 42, 36, 75, 3, 65, 45, 24, 15, 25, 14, 30, 41, 53, 34, 11, 93, 86, 32, 26, 97, 7, 98, 50, 38, 68, 59, 64, 63, 76, 91, 52, 71, 43, 35, 18, 79, 87, 29, 58, 78, 22, 95, 49, 90, 67, 89, 69, 62, 9, 33, 99, 6, 82, 8, 70, 84, 77, 37, 72, 46, 16, 23, 73, 92, 60, 66, 100, 20};

	for(int b=1;b<=100;b++) {

		a=a+b;

	}

	for(int c=0;c<100;c++) {

		d +=yeah[c];

	}

		printf("%d\n",a-d);

	}
