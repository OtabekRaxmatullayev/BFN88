#include <stdio.h>
int main() {

	int start=1, stop=100, sum=0;

	do {

		sum=sum+start;
		start++;

	} while(sum<=stop);

		printf("%d\n",start-2);
		printf("%d\n",sum-start+1);
	return 0;

	}
