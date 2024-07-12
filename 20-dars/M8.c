#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

	char ismi[32];
	char familiyasi[32];
	short kursi;
	bool stependiya;
	char tahsil_joyi_nomi[64];
	bool turar_joyi;
} TALABA;

void func1(TALABA *talaba) {

	puts("");
	printf("Ismi:		%s\n", talaba->ismi);
	printf("Familiyasi:	%s\n", talaba->familiyasi);
	printf("Kursi:	 	%hd\n", talaba->kursi);
	printf("Stependiyasi:   %s\n", talaba->stependiya ? "ha" : "yo'q");
	printf("O'qish joyi:    %s\n", talaba->tahsil_joyi_nomi);
	printf("Turar joyi:     %s\n", talaba->turar_joyi ? "TTJ" : "Kvartira");
	puts("");

}

void func2(TALABA *talaba) {

	printf("\nIsmni kiriting:  ");
	scanf(" %[^\n]",talaba->ismi);
	printf("Familiyani kiriting:  ");
	scanf(" %[^\n]",talaba->familiyasi);
	printf("Nechanchi kurs?  ");
	scanf("%hd",&talaba->kursi);
	int son;
	printf("Stependiya oladimi? (1-ha, 0-yo'q)  ");
	scanf(" %d", &son);
	talaba->stependiya=(son==1);
	printf("Qayerda o'qiydi?  ");
	scanf(" %[^\n]",talaba->tahsil_joyi_nomi);
	int joy;
	printf("Qayerda yashaydi? 1-TTJ, 0-Kvartira  ");
	scanf(" %d", &joy);
	talaba->turar_joyi=(joy==1);
}

int main() {

	int n;
        printf("Samalyotlar sonini kiriting: ");
        scanf("%d",&n);

	TALABA *students = malloc(n *sizeof(TALABA));

	for(int a=0;a<n;a++) {
		printf("\n%d - samalyot ma'lumotlarini kiriting:\n", a + 1);
		func2(&students[a]);
	}

	for(int a=0;a<n;a++) {
		if(strlen(students[a].ismi)<=5) {
		func1(&students[a]);
	}
}

	free(students);

	return 0;

	}
