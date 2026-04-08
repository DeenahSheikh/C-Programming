#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Enter a sentence: Original: ");
    char sentence[200];
    scanf("%s",sentence);

    printf("%s\n", sentence);
    int count=strlen(sentence);
    printf("Characters: %d\n",count);
    int length=strlen(sentence);

    int vowel_count=0;
    for(int i=0; i<length; i++){
        char c=sentence[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            vowel_count++;
        }
    }
    printf("Vowels: %d\n", vowel_count);

    printf("Uppercase: ");
    for(int i=0;i<strlen(sentence) ;i++){
        printf("%c",toupper(sentence[i]));  }
        printf("\n");

    return 0;
}