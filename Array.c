#include <stdio.h>
/*int main()
{
    int a[10];
    int sum=0;
    float average;
    printf("Enter ten elements:\n");
    for (int i=0; i<10; i++)
    {scanf("%d" , &a[i]);
    sum=sum+a[i];}
    
    printf("Array elements are:\n");
    for (int i=0; i<10; i++){
        printf("%d" ,a[i]);
    }

    printf("\nSum= %d\n", sum);

    average=(float)sum/10;
    printf("The average is %f", average);

    return 0;
}
*/



//in float
#define MAX 10
int main()
{
    float a[MAX];
    int i;
    float sum=0;
    float average;
    printf("Enter ten elements:\n");
    for (int i=0; i<MAX; i++)
    {scanf("%f" , &a[i]);
    sum=sum+a[i];}
    
    printf("Array elements are:\n");
    for (i=0; i<MAX; i++){
        printf("%.2f" ,a[i]);
    }

    printf("\nSum= %f\n", sum);

    average=(float)sum/10;
    printf("The average is %f", average);

    return 0;
}