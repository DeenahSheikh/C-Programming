#include <stdio.h>
//input a no and print its length if no. is 0 print 1

int main(){

    int n;
    scanf("%d",&n);

    int c=0;
    if(n!=0){
    while(n>0){
        c++;
        n=n/10;

    }
    printf("%d",c);
}
else{
    printf("1");
}
    return 0;
}