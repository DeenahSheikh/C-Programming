#include <stdio.h>

int main(){
    int n;
    int a=0;
    int b=1;
    int temp;

    scanf("%d",&n);

    //0 1 1 2 3 5 8
    for(int i=0;i<n;i++){

        printf("%d ",a);
            temp= a+b;
            a=b;
            b=temp;
    }
    return 0;
}