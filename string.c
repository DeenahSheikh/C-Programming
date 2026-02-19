#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null character '\0'
    while (str[i] != '\0') {
        i++;
    }

    printf("Length of the string is: %d", i - 1);  
    // i - 1 because fgets also counts newline

    return 0;
}
