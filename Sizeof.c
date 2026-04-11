#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double *arr=(double*)malloc(n * sizeof(double));
    for(int i=0; i<n; i++){
    scanf("%lf", &arr[i]);
    }
    int bytes= n* sizeof(double);
    printf("Memory allocated: %d bytes\n", bytes);
    double sum=0.0;
    for(int i=0; i<n ; i++){
        sum+=arr[i];
    }
    double average= sum / n;
    printf("Average: %.2f\n", average);
    double largest= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest =arr[i];
        }
    }
    printf("Largest: %.2f\n", largest);
    return 0;
}