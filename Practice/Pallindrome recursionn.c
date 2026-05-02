#include <stdio.h>
#include <string.h>

int isPallindrome(char str[]){
    int left=0;
    int right=strlen(str)-1;

    while (left<right){
        if(str[left]!=str[right]){
            return 0;
        }
    left++;
    right--;
    }
    return 1;
}
int main(){
    char word[100];
    printf("Enter a string: ");
    scanf("%s",word);

    if(isPallindrome(word)){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}