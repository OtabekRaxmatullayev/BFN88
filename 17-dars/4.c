#include <stdio.h>
#include <string.h>

int main() {

	char text[100]="";
		printf("So'z kiriting:\n");
		scanf("%[^\n]",text);

	for(int a=0; text[a]!='\0';a++) {
		int c=0;
		for(int b=0;text[b]!='\0';b++) {
			if(text[a]==text[b]) {
				c++;
			}
		}

		printf("%c ----> %d ta\n",text[a],c);
	}
		return 0;
	}
