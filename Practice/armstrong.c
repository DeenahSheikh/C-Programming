#include <stdio.h>

#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    char b=n;
    int length=3;

    int result=0;
    while(n!=0){
        int digit=n%10;
        result+=pow(digit,length);
        n=n/10;
    }
    if(result==temp){
    printf("%d",result);}
    else{
        printf("Not armstrong");
    }
}