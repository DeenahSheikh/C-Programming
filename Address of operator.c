#include <stdio.h>

int main() {
    int number=42;
    char letter='X';

    int *num_ptr;
    char *char_ptr;

    num_ptr= &number;
    char_ptr= &letter;

    printf("Address of number: %p", (void*)num_ptr);
    printf("Address of letter: %p",(void*)char_ptr);

    return 0;
}