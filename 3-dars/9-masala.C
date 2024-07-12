#include <stdio.h>
int main() {

	char harf;
	scanf(" %c",&harf);

        if(harf>='a' && harf<='z') {
		harf=harf-32;
	}
   else if(harf>='A' && harf<='Z') {
		harf=harf+32;
	}
	printf("%c",harf);
	}
