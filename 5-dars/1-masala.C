#include <stdio.h>
int main() {

	int a,b,c;
	scanf("%d",&a);
	b=1;
	c=0;

	while(a>=b) {

		if(a%b==0) {
			c+=1;
	}
	   	b+=1;
	}
		if(c==2) {
			puts("tub son");
	}
	   else puts("tub son emas");
	return 0;
	}
