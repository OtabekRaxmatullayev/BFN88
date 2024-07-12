#include <stdio.h>
#include <ctype.h>

int main() {

	int son=0;
        char yeah[100]="";
                printf("Ixtiyoriy matn kiriting:\n");
                scanf("%[^\n]", yeah);

        for(int a = 0; yeah[a] != '\0'; a++) {
                if(isdigit(yeah[a])) {
                        son = son + yeah[a] - 48;
                }
        }
		printf("Yig'indi = %d",son);

                return 0;
        }
