#include <stdio.h>
#include <string.h>

int addDigits(int num) {
    char str[50];     // Array to store number as string
    int sum;

    while (1) {
        sprintf(str, "%d", num);   // Convert number to string
        
        if (strlen(str) == 1)      // If single digit, stop
            return num;

        sum = 0;

        for (int i = 0; i < strlen(str); i++) {
            sum += str[i] - '0';   // Convert char to digit
        }

        num = sum;   // Repeat with new sum
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Single digit result: %d", addDigits(num));

    return 0;
}