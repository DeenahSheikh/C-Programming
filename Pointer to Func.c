#include <stdio.h>

int displayValue(int *ptr){
    printf("Value at address: %d\n", *ptr);
}

int main() {
    int number=42;
    printf("Original value: %d\n",number);
    displayValue(&number);
    printf("Function call completed");
    
    return 0;
}