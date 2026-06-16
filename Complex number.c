#include <stdio.h>
int main(){
    typedef struct complex{
        int real;
        int imag;
    }COMPLEX;
    COMPLEX c1, c2, sum_c,sub_c;
    int option;
    {
    printf("\n *****MAIN MENU****");
    printf("\n 1. read the two complex numbers");
    printf("\n 2. display two complex numbers");
    printf("\n 3. add two complex numbers");
    printf("\n 4. subtract two complex numbers");
    printf("\n 5. exit");
    printf("\n Enter your option: ");
    scanf("%d",&option);
    switch (option)
    {
        case 1:
        printf("\n Enter the real and imaginary part of first complex number: ");
        scanf("%d%d",&c1.real,&c1.imag);
        printf("\n Enter the real and imaginary part of second complex number: ");
        scanf("%d%d",&c2.real,&c2.imag);
        break;
        
        case 2:
        printf("\n First complex number: %d + %di",c1.real,c1.imag);
        printf("\n Second complex number: %d + %di",c2.real,c2.imag);
        break;

        case 3:
        sum_c.real = c1.real + c2.real;
        sum_c.imag = c1.imag + c2.imag;
        printf("\n Sum of two complex numbers: %d + %di",sum_c.real,sum_c.imag);
        break;

        case 4:
        sub_c.real = c1.real - c2.real;
        sub_c.imag = c1.imag - c2.imag;
        printf("\n Difference of two complex numbers: %d + %di",sub_c.real,sub_c.imag);
        break;

        case 5:
        printf("\n Exiting");
        break;

        default:
        printf("\n Invalid option");

    }
    }
}