#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];

    //input
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
        scanf("%d", &arr1[i][j]);
    }}


    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
        scanf("%d", &arr2[i][j]);
    }}

    //sum
    for(int i=0;i<r;i++){
        for(int j=0;j<c; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    //print
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }return 0;
    }