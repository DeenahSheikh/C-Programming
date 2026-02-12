#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the total no.of values");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search");
    scanf("%d", &j);

    for(i=0; i<n; i++){
        if(arr[i]==j){
            printf("Element found");
            return 0;

        }
    }
    printf("Element not found");
    return 0;

}