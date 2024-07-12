#include <stdio.h>
int main() {

	float a;
	scanf("%f",&a);

	if (a<=0) {
		printf("o'ta sovuq");
	}
   else if (a>0 && a<=20) {
		printf("juda sovuq");
	}
   else if (a>20 && a<=30) {
		printf("normal");
	}
   else if (a>30 && a<=40) {
		printf("issiq");
	}
   else if (a>40) {
		printf("juda issiq");
	}
	}
