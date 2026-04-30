#include <stdio.h>

//int to octal

int main(){
int n;
scanf("%d",&n);

int arr[32];
int i=0;

while(n>0){
    arr[i++]=n%8;
    n=n/8;
}

for(int j=i-1;j>=0;j--){
    printf("%d",arr[j]);
}
}