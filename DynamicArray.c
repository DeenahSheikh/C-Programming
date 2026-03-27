#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p=malloc(sizeof(int));
    for (int i=0;i<5;i++){
        scanf("%d",p);
        printf("%p",p);
        printf("\n%d",*p);
        p++;
    }
    return 0;

}