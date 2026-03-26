#include <stdio.h>
void display(int*); 
int main()
{
    int a[5] = {1,2,3,4,5};
    printf("Passing Array as a parameter:\n");
    display(a);
    return 0;
}
void display(int *p)
{for(int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }
}