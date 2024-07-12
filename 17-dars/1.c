#include <stdio.h>
#include <string.h>

int main() {

	char ism[50] = "",familiya[50] = "";

		printf("Ismingizni kiriting:");
		scanf("%[^\n]",ism);
		getchar();//ikkinchi scanf ishlamadi bu funksiyasiz
		printf("Familiyangizni kiriting:");
                scanf("%[^\n]",familiya);

		int uzunlik=strlen(ism);
		strcat(ism," ");
		strcat(ism,familiya);
		strcat(familiya," ");
		strncat(familiya,ism,uzunlik);
		puts(ism);
		puts(familiya);

		return 0;
	}
