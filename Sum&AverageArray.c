#include <stdio.h>

//Function declaration
void calculate(int arr[], int size, int *sum, float *avg);

int main(){
    int a[5]={1,2,3,4,5};
    int sum;
    float avg;

    calculate(a,5,&sum,&avg);
    printf("Sum= %d\n",sum);
    printf("Average= %.2f\n",avg);

    return 0;
}

void calculate(int arr[],int size,int *sum, float *avg){
    *sum=0;
    for(int i=0; i<size ;i++){
        *sum+=arr[i];
    }
    *avg=(float)(*sum)/size;
}