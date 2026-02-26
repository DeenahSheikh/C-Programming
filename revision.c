/*//sum
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int sum=0;
    for(int i=0;i<=n;i++){
        sum +=i;
    }
    printf("%d",sum);
    return 0;
} 

//max in array
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    printf("%d",max);

    return 0;
}

//reverse a number
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    printf("%d",reverse);

return 0;}

//check even odd
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if (n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}

//count digits in a number
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    printf("%d",count);

    return 0;
}

//largest number among three
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }}
    else{
        if(b>c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    
    }
    return 0;
}

//prime number
#include <stdio.h>
int main(){
    int n, flag=0;
    scanf("%d",&n);

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
        }
    }

    if(flag==0 && n>1){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}

//fibonnaci series
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a=0,b=1,next;
    for(int i=0;i<=n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }

}*/

//