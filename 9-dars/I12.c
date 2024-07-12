#include <stdio.h>

int func(int a, int b,int c){

	scanf("%d%d%d",&a,&b,&c);
	int ort;

	if(a>=b && a<=c || a>=c && a<=b)

		ort=a;

	if(b>=a && b<=c || b>=c && b<=a)

		ort=b;

	if(c>=b && c<=a || c>=a && c<=b)

		ort=c;

		return ort;

	}

int main() {

	int ortacha=func(0,0,0);

	printf("%d\n",ortacha);

	}
