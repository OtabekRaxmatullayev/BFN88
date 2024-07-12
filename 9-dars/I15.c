#include <stdio.h>

void func(int a) {

	scanf("%d",&a);

	int b=1,c=0;

	while(a/2>=b){

		if(a%b==0) {

		c +=b;

	}
		b +=1;

	}

	if(a==c)

		printf("mukammal son");

	else    printf("mukammal emas");

	}

int main() {

	func(0);

	}
