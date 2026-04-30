#include <stdio.h>
#include <stdlib.h>
//second largest
int abc(const void *a, const void *b){
    return (*(int*) b - *(int*) a);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),abc);
    printf("%d",arr[1]);

}