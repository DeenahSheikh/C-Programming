#include <stdio.h>

int addnum(int x){
    static int rev=0;
    if(x==0){
        return rev;
    }

    rev=rev*10+(x%10);

    return addnum(x/10);
}

int main(){
    int x=1234;
    printf("%d",addnum(x));
    return 0;
}