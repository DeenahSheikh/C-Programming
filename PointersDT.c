#include <stdio.h>
int main(){
    int a=5;
    float b=6.5f;
    char c='a';
 
    int *p1=&a;
    float *p2=&b;
    char *p3=&c;

    printf("\n %p,[%d], %d", p1,*p1);
    printf("\n %p,%f, %d", p2,*p2,sizeof(b));
    printf("\n %p,[%c], %d", p3,*p3,sizeof(c));
    return 0;
}