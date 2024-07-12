#include <stdio.h>
#include <ctype.h>

int main() {

        char yeah[100]="";
                printf("Ixtiyoriy matn kiriting:\n");
                scanf("%[^\n]", yeah);

        for(int a = 0; yeah[a] != '\0'; a++) {
                if(islower(yeah[a])) {
                        printf("%c",yeah[a]);
                } else if(isupper(yeah[a])) {
                        yeah[a]=tolower(yeah[a]);
                        printf("%c",yeah[a]);
                } else printf("%c",yeah[a]);
        }
                return 0;
        }
