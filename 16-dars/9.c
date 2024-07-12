#include <stdio.h>
#include <ctype.h>

int main() {

        char yeah[100]="";
                printf("Ixtiyoriy matn kiriting:\n");
                scanf("%[^\n]", yeah);

        for(int a = 0; yeah[a] != '\0'; a++) {
                if(isupper(yeah[a])) {
			yeah[a]=tolower(yeah[a]);
                        printf("%c",yeah[a]);
                } else if(islower(yeah[a])) {
                        yeah[a]=toupper(yeah[a]);
                        printf("%c",yeah[a]);
                } else printf("%c",yeah[a]);
        }
                return 0;
        }
