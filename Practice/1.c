/*
Given an array of N integers, find the difference
between the largest and smallest element using pointers.

Function Prototype:
int range(int *arr, int n);

Example:
Input:
5
10 4 25 7 18

Output:
21
*/
#include <stdio.h>

int range(int *arr, int n)
{
    int max=*arr;
    int min=*arr;

    for(int i=0;i<n;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
        if(*(arr+i)<min){
            min=*(arr+i);
        }
    }
    return max-min;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", range(arr, n));

    return 0;
}