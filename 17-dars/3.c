#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

	char gap[100]="";
		printf("Gap kiriting:\n");
		scanf("%[^\n]s",gap);

	for(int a=0;gap[a]!='\0';a++) {
		if(islower(gap[a])) {
			gap[a]=toupper(gap[a]);
			break;
	} else if(isupper(gap[a]))
			break;
	}
		strcat(gap,".");
		puts(gap);
		return 0;
	}
