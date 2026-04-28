//q2 wap to read and display add and subtract 2 heights (given in feet and inches) using pointer.
#include <stdio.h>

void add(int feet1, int inches1,int feet2,int inches2 ,int *tf, int *ti){
    //5 10 5 5 = 11 4
    *tf= feet1+feet2;
    *ti=inches1+inches2;
    if(*ti>11){
        *ti=*ti-12;
        *tf+=1;
    }



}
int main()
{
    int feet1, inches1, feet2, inches2;
    int afeet,ainches;
    printf("Enter the first height (feet and inches): ");
    scanf("%d %d", &feet1, &inches1);
    printf("Enter the second height (feet and inches): ");
    scanf("%d %d", &feet2, &inches2);

    add(feet1,inches1,feet2,inches2,&afeet,&ainches);

    printf("sum = %d feet %d inches",afeet,ainches);

    return 0;
}