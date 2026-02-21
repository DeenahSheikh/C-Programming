#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    //input
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //print
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //condition
    if(r!=c){
        printf("Not symm");
        return 0;
    }
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]!= arr[j][i]){
                printf("Not symm");
                return 0;
            }
        }
    }
    printf("Symm");
    return 0;
}