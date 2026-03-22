#include <stdio.h>

void digitFrequency(int num) {
    int freq[10] = {0};  // array to store frequency of digits

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    printf("Digit Frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d -> %d times\n", i, freq[i]);
        }
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    digitFrequency(number);

    return 0;
}