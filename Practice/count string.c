#include <stdio.h>
#include <ctype.h>

int main(){
    char str[100];
    scanf("%s",str);

    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(tolower(str[i])==tolower(str[i+1])){
            count++;
        }
        else{
            printf("%c%d",toupper(str[i]),count);
            count=1;
        }
    }
    return 0;
}