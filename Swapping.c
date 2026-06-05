#include <stdio.h>
//swapping two numbers without using a third variable 
int main()
{int a,b;
 scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("%d\n%d",a,b);
    return 0;
}