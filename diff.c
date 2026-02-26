//wap to insert to matrices and find their diff
#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int arr1[m][n];
    int arr2[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr2[i][j]=arr[i][j]-arr1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}