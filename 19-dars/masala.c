#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char name[32];
    char lastname[32];
    int age;
    bool status;
    float height;
} User;

void printUser(User *user) {
    printf("\n");
    printf("Name: %s\n", user->name);
    printf("Lastname: %s\n", user->lastname);
    printf("Age: %d yosh\n", user->age);
    printf("Status: %d\n", user->status);
    printf("Status: %s\n", user->status ? "online" : "offline");
    printf("Height: %2.f metr\n",user->height);
    printf("\n");
}

User inputUser() {
    User new;
    printf("Ismni kiriting: ");
    scanf("%s", new.name);
    printf("Familiyani kiriting: ");
    scanf("%s", &new.lastname);
    printf("Yoshni kiriting: ");
    scanf("%d", &new.age);
    printf("Bo'yni kiriting: ");
    scanf("%f", new.height);
    return new;
}

int main() {
    User user1 = inputUser();
    User user2 = inputUser();
    User user3 = inputUser();
    printUser(&user1);
    printUser(&user2);
    printUser(&user3);
    return 0;
}
