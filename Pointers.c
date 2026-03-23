#include <stdio.h>
int main(){
    int a=5;
    int *p;//pointer variable that can store the adress of another integer variable
    p=&a;
    printf("%p\n",&a);
    printf("%p",p);


    *p=*p+5;
    printf("\n %d",a);
    *p=*p**p;
    printf("\n %d",a);
    return 0;
}