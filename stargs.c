#include <stdio.h>
#include <stdarg.h>

int mul(int c,...){
    int i, tot=1;
    va_list a1;
    va_start(a1,c);
    for(i=0;i<c;i++){
        tot *=va_arg(a1,int);
    }
    va_end(a1);
    return tot;

}
int sum(int count,...){
    int i,total=0;
    va_list args;
    va_start(args,count);
    for(i=0;i<count;i++){
        total+= va_arg(args,int);
    }
    va_end(args);
    return total;
}

int main(){
    printf("Sum= %d\n",sum(5,10,20,30,40,50));
    printf("Mul= %d\n",mul(4,1,2,3));
    return 0;

}