#include <stdio.h>
#include <ctype.h>

int main() {

	int harf=0,raqam=0;
	char yeah[100] = "";
	printf("Ixtiyoriy matn kiriting\n");
	scanf("%[^\n]", yeah);

	for (int a = 0; yeah[a] != '\0'; a++) {
		if (isalpha(yeah[a])) {
         		harf++;
    	} else if(isdigit(yeah[a])) {
			raqam++;
	}
    		}
	printf("Harflar soni = %d\n",harf);
	printf("Raqamlar soni = %d\n",raqam);

 		return 0;
	}

