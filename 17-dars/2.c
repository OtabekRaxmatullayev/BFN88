#include <stdio.h>
#include <string.h>

int main() {

	char yeah[100]="";
	char ok[100]="";
	int a=0;

		printf("Diqqat! so'z kiritishni to'xtatmoqchi bo'lsangiz stop deb yozing:\n");

	do {
		printf("So'z kiriting:");
		scanf(" %99s",yeah);// %99s faqat bir so'z kiritishga imkon berarkan
		a++;

		 if(strcmp(yeah,"stop")==0) {
                        break;
        }

		strcat(ok,yeah);
		strcat(ok," ");

		if(a%5==0) {
			strcat(ok,". ");
	}
		}while(1);

	puts(ok);

	return 0;

	}
