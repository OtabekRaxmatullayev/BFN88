#include <stdio.h>
int main() {

	int a,b,c,d,e,min;

		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

		min=a;

	do {

	if(min>b)
		min=b;
	if(min>c)
		min=c;
	if(min>d)
		min=d;
	if(min>e)
		min=e;
	} while(0);

		printf("eng kichik son: %d ",min);

	}
