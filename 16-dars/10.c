#include <stdio.h>
#include <ctype.h>

int main() {

	int son=0;
        char yeah[100]="";
                printf("Ixtiyoriy matn kiriting:\n");
                scanf("%[^\n]", yeah);

        for(int a = 0; yeah[a] != '\0'; a++) {
                if(isspace(yeah[a])) {
                        son++;
        }
		}
		printf("%d",son);
                return 0;
        }
