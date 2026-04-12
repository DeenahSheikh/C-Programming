#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    scanf("%d", &count);
    int *arr= (int*)malloc(count *sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    else{
        printf("Memory allocated successfully!\n");
    }
    for(int i=0; i<count; i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    int maximum= arr[0];
    for(int i=0; i<count; i++){
        sum+= arr[i];
        if(arr[i]>maximum){
            maximum= arr[i];
        }
    }
    printf("Sum: %d\n", sum);
    printf("Maximum: %d\n", maximum);
    
    free(arr);
    printf("Memory freed successfully!");

    return 0;
}