#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n;i++){
        char first[50];
        char last[50];

        scanf("%s",first);
        scanf("%s",last);

        char fullName[100];
        strcpy(fullName,first);
        strcat(fullName," ");
        strcat(fullName,last);

        char greeting[150];
        strcpy(greeting, "Hello, ");
        strcat(greeting, fullName);
        strcat(greeting,"! Welcome to our program.");

        printf("%s\n",greeting);
    }

    char summary[100];
    strcpy(summary, "Total people processed: ");
    char nStr[10];
    sprintf(nStr,"%d", n);
    strcat(summary,nStr);
    printf("%s\n", summary);

    return 0;
}