#include <stdio.h>
#include <ctype.h>

int main() {

        char yeah[100]="";
                printf("Ixtiyoriy matn kiriting:\n");
                scanf("%[^\n]", yeah);

        for(int a = 0; yeah[a] != '\0'; a++) {
                if(isupper(yeah[a])) {
                        printf("%c\n",yeah[a]);
                }
        }
                return 0;
        }
