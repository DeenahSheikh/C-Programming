#include <stdio.h>
#define DISCOUNT 15
int main()
    {
        int quantity=2;
        float price=499.50;
        char category='A';
        
        float total= price*quantity;
        total -= total*DISCOUNT/100.0;

        quantity++;//increment

        int even= (quantity%2==0);//modulo operator and boolean

        //type cast
        int final_price= (int) total;

        printf("Final Quantity: %d\n",quantity);
        printf("Is Quantity Even? %d\n", even);
        printf("Original Price: %.2f\n", price);
        printf("Final Price: %d\n",final_price);
        printf("Category: %c",category);

    }