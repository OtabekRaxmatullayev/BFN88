#include <stdio.h>
int main() {

	int temp;
	scanf("%d",&temp);

	switch(temp) {
		case -273 ... -1:
			puts("o'ta sovuq");
			break;
		case 0 ... 9:
			puts("juda sovuq");
			break;
		case 10 ... 19:
			puts("sovuq");
			break;
		case 20 ... 29:
			puts("normal");
			break;
		case 30 ... 39:
			puts("issiq");
			break;
	}
	switch(temp>=40) {
		case 1:
			puts("Juda issiq");
		}
			}
