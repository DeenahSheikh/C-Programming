#include <stdio.h>
#include <stdio.h>

void analyzeTemperatures(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }

    float average= (float)sum/size;
    printf("Average temperature: %.1f\n",average);

    int high=*arr;
    for(int i=0;i<size;i++){
        if(arr[i]>high){
            high=arr[i];
        }

    }
    printf("Highest temperature: %d\n",high);
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i] >25){
            count++;
        }
    }
    printf("Days above 25 degrees: %d\n",count);

}
int main() {
    int n;
    scanf("%d", &n);
    int temperatures[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }
    analyzeTemperatures(temperatures,n);
    return 0;
}