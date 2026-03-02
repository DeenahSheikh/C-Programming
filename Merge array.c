// wap to input 2 arrays and merge them into one array
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    int arr1[a];
    int arr2[b];
    int arr3[c];

    for(int i=0;i<a;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<a;i++){
        scanf("%d",&arr2[i]);
    }
//merge
    for (int i = 0; i < a; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < b; i++) {
        arr3[a+i] = arr2[i];
    }
//print
    for(int i=0;i<c;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}