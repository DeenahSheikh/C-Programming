#include <stdio.h>

int main(){
    int n,rev=0;
    scanf("%d",&n);
    int sum=0;
    while (n!=0){
        int digit= n%10;
        rev=rev*10+digit;
        n=n/10;
        sum+=digit;   
    }
    printf("%d\n",sum);
    printf("%d",rev);
}