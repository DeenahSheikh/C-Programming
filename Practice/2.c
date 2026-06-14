/*
Given an array of N integers, find the first element
that occurs more than once.

Use pointers to traverse the array.

If no element is repeated, return -1.

Function Prototype:
int firstRepeated(int *arr, int n);

Input:
7
4 8 2 5 8 1 2

Output:
8

Explanation:
8 is the first element whose duplicate appears later.
Although 2 is also repeated, its first occurrence comes after 8's first occurrence.
*/
#include <stdio.h>

int firstRepeated(int *arr, int n)
{

   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(*(arr+i)==*(arr+j)){
            return *(arr+i);
        }
    }
   }
   return -1;
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

    printf("%d", firstRepeated(arr, n));

    return 0;
}