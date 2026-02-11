#include <stdio.h>
int main(){
    char ch;
    printf("Enter alphabet:");
    scanf("%c", &ch);

    switch(ch){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("It is a vowel.");
        break;

        default:
        printf("It is a consonant.");

    }

    return 0;
}