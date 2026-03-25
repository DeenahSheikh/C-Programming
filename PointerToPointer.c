#include <stdio.h>

int main(){
    int a =5;
    int *p1=&a;
    int **p2=&p1;
    printf("%d",p1);
}