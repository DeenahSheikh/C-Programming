//1) wap to find the 3 smallest using array of n numbers

#include <stdio.h>
#include <stdlib.h>

int findthrird(const void *a, const void *b){
    return (*(int*) a- *(int*)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),findthrird);
    printf("%d",arr[2]);
}