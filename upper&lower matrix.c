#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int us=0,ls=0,ss=0,sus=0;

    //input 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }


    //sum of us
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            if(i<=j){
                us+=arr[i][j];
            }
        }
    }
    //sum of ls
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            if(i>=j){
                ls+=arr[i][j];
            }
        }
    }
    //sum of ss
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            if(i<j){
                ss+=arr[i][j];
            }
        }
    }
    //sum of sus
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            if(i>j){
                sus+=arr[i][j];
            }
        }
    }
    //print
    printf("%d %d %d %d", us, sus, ls ,ss);
    return 0;
}