#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *ptr=(int*)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }
    else{
        printf("Memory allocation successful!\n");
    }
    for(int i=0; i<n;i++){
        scanf("%d",&ptr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= ptr[i];
    }
    printf("Sum: %d\n", sum);

    int bytes= n * sizeof(int);
    printf("Bytes allocated: %d\n", bytes); 

    return 0;
}