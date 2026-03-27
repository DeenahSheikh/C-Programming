#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p=malloc(sizeof(int));
    *p=12;
    printf("%d",*p);

    return 0;
}