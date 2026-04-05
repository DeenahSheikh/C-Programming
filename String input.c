#include <stdio.h>

int main() {
    char username[30];
    char hobby[25];

    printf("Enter your username:\n");
    scanf("%s",username);
    printf("Enter your hobby:\n");
    scanf("%s",hobby);

    printf("Hello %s, your hobby is %s!", username, hobby);
    return 0;
}