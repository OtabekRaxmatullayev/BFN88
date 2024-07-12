#include <stdio.h>
int main() {

	char belgi;
	scanf(" %c",&belgi);

	switch(belgi>='a' && belgi<='z') {
		case 1:
			printf("%c",belgi-32);
			break;
		case 0:
	switch(belgi>='A' && belgi<='Z') {
		case 1:
			printf("%c",belgi+32);
			break;
		case 0:
			puts("bu harf emas");
			break;
	}
		}
			}
