#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    int max=0;
    int count=0;
    float sum=0;
    float average;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>5){
            count++;
        }
    }
    average=sum/n;

    printf("%d\n",max);
    printf("%d\n",count);
    printf("%.2f\n",average);
}