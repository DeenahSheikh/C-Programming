#include <stdio.h>
int main(){
    //Array of Pointers
    int *a[5];
    int b=5;
    a[0]=&b;
    printf("%d",*a[0]);
}