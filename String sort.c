#include <stdio.h>
#include <string.h>
int main(){
    char Name[10][20], temp[20];
    int n;
    printf("Enter number of students");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("\n%s", Name[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++)
        {
            if (strcmp(Name[j],Name[j+1])>0){
                strcpy(temp, Name[j]);
                strcpy(Name[j], Name[j+1]);
                strcpy(Name[j+1],temp);}
        }
    }
    printf("\nSorted Names:\n");
    for (int i=0; i<n; i++){
        printf("%s\n", Name[i]);
    }
    return 0;
}