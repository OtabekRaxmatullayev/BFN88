#include <stdio.h>
int main() {

	int a,b,c,d,e,max;

	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
		max=a;

	do {

	if(max<b)
		max=b;
	if(max<c)
		max=c;
	if(max<d)
		max=d;
	if(max<e)
		max=e;

	} while(0);

		printf("maksimal son: %d",max);
	}
