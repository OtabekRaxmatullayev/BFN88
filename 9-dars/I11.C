#include <stdio.h>

void ooo(int a, int b){

	scanf("%d%d",&a,&b);

	while(a<b) {

		printf("   %d\n",a);

		a=a+1;

	} while(a>b){

		printf("  %d\n",a);
		a=a-1;

	}

	}

int main(){

	ooo(0,0);
}
