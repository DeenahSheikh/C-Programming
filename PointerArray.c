#include <stdio.h>
int main(){
    int a[10];
    int *p;
    p=a;
    for(int i=0;i<10;i++){
        printf("Enter [%d] th element",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        *p=*p+5;
        printf("\n [%d] th element: %d",i,*p);
    }
    return 0;
}