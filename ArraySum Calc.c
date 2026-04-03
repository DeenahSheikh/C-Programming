#include <stdio.h>

// TODO: Write your calculateSum function here
int calculateSum(int *arr, int size){
    int sum =0;
    int *ptr=arr;

    for(int i=0;i<size;i++){
        sum+= *ptr;
        ptr++;
        }
        return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // TODO: Call calculateSum function and store the result
    int result =calculateSum(arr,n);
    // TODO: Print the result in format "Sum: [value]"
    printf("Sum: %d", result);
    return 0;
}