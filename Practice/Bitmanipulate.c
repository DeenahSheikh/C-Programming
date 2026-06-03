#include <stdio.h>
int countBits(int num){
    int count=0;
    while(num>0){
        count+=num & 1;
        num=num>>1;
    }
    return count;
    
}

int main(){
    int t,num,set_bits;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&num);
        set_bits=countBits(num);
        printf("%d\n",set_bits);
        t--;
    }
    return 0;
}