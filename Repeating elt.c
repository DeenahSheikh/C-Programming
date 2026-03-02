//first elt that doesnt repeat in an array
#include <stdio.h>
int main(){
    int n;
    printf("mp of elements:");
    scanf("%d",&n);
    
    int arr[n];
    printf("%d elts",n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int found=0;

    for(int i=0; i<n; i++){
        int count=0;

        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count ==1){
            printf("non-repeating:%d\n", arr[i]);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("No unique\n");
    }

    return 0;
}