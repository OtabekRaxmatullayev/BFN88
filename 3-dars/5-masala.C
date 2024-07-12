#include <stdio.h>
int main() {

	float son1, son2;
       	 char belgi;

	scanf("%f",&son1);
	 scanf("%f",&son2);
	  scanf(" %c",&belgi);
		if ( belgi=='+' ) {
	printf("%.2f",son1+son2);
			}
	   else if ( belgi=='-' ) {
	printf("%.2f",son1-son2);
			}
	   else if ( belgi=='*' ) {
	printf("%.2f",son1*son2);
			}
	   else if ( belgi=='/' ) {
	printf("%.2f",son1/son2);
			}
	}
