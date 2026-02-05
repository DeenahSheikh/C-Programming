#include <stdio.h>
int main()
{ int num, a, reverse=0, r;
    printf("Enter a number:");
    scanf("%d", &num);

    a= num;
    while (num!=0){
        r=num%10;
        reverse= reverse*10 +r;
        num=num/10;
    }
    if (a==reverse)
    printf("Pallindrome number");
    else
    printf("Not a pallindrome number");

    return 0;


}