#include <stdio.h>

int func(int a) {

        int b=1,c=0;

        scanf("%d",&a);
	b=(a+1)/2;

        while(b>0) {

                if((a+1)%b==0) {

                        c +=1;

        }
                	b--;

		if(c>1) {

			a +=1;
			b=a/2;
			c=0;

	}

        }

                return a+1;

        }

int main() {

        int d=func(0);

		printf("%d",d);

	}
