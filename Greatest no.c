#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    printf("Enter the third number");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("Number1= %d is greatest number", a);
    }
    else if (b> a && b>c)
    {
    printf("Number2= %d is greatest number", b);
    }
    else
    {
    printf("Number 3=%d is greatest number", c);
    }
    return 0;
}