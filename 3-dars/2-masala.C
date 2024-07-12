#include <stdio.h>
int main() {

	float a;

	scanf("%f",&a);
        if (a<0 || a>100) {
		printf("bunaqa ball yo'q");
		}
   else if (a>=0 && a<20) {
		printf("siz bebahosiz!");
		}
   else if (a>=20 && a<40) {
		printf("2");
		}
   else if (a>=40 && a<60) {
		printf("3");
		}
   else if (a>=60 && a<80) {
		printf("4");
		}
   else if (a>=80 && a<=100) {
		printf("5");
		}
		}
