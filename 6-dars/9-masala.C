#include <stdio.h>
int main() {

	int son,max1=0,max2=0;

	do {
		scanf("%d",&son);

		if(son>max1) {
			max2=max1;
			max1=son;
	} else  if(son>max2 && son!=max1) {
			max2=son;
	}
	} while (son>=0);

		if(max2==0) {
		puts("2- eng katta son yo'q ");
	}  else printf("%d",max2);
	}
