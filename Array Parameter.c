#include <stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    //Function Declaration
    void display(int*);
    printf("Passing Array as a parameter:\n");
    display(a);
}

void display(int*p)
{
    for(int i=0;i<5;i++)
    {printf("%d\n",*p);
    p++;}
}