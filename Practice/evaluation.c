#include <stdio.h>
//1
//212
//32123
//4321234
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<n+1;i++){
    for(int j=i;j>0;j--){
        printf("%d",j);
    }
    for(int k=2;k<i;k++){
        printf("%d",k);
    }
    printf("\n");
}


    return 0;
}
