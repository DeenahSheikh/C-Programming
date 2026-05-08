//3) wap to enter a hexadecimal no calc and display the decimal equiv of this number;

#include <stdio.h>

int main(){
    char abc[50];
    scanf("%s",abc);

    int res=0;
    int i=0;
    int temp;

    while(abc[i]!='\0'){
        char new=abc[i];
        if(new>='0' && new<='9'){
            temp=new-'0';
            //a5
            //5 (53), 0 (48)
            //53-48
            //5
        }
        else if(new>='A' && new<='F'){
            temp=new-'A'+10;
            //B5
            //66-65+10
            //11
        }
        else{
            printf("Invalid no");
        }
        res=res*16+temp;
        i++;
    }

    printf("%d",res);


    return 0;
}