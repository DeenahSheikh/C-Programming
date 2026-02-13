#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter no.of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Element to search: ");
    scanf("%d", &j);

    int low=0;
    int high= n-1;
    int mid;
    int found=0;

    while(low<=high){
        mid=(low+high)/2;

        if (arr[mid] == j){
            printf("Element found");
            found=1;
            break;
        }
        else if(j >arr[mid]){
            low= mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(found==0){
        printf("Element not found");
    }
    return 0;
}