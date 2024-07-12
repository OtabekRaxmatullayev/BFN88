#include <stdio.h>
int main() {

	int yeah[100],n=10,b=1,c=0;

	for(int a=0;a<=n;a++) {

		printf(" %d - indeksga qiymat kiriting: ",a);
		scanf("%d",&yeah[a]);
	}

	for(int a=0;a<=n;a++) {

		if(a%2==0) {

			b=b*yeah[a];
	}
		else c=c+yeah[a];

	}

		printf("\njuft indeksdagilar ko'paytmasi=%d\n",b);
		printf("\ntoq indeksdagilar yig'indisi=%d\n",c);

	}
