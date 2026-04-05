#include <stdio.h>

int main() {
    char name[5]="John\0";
    char city[7]= "Boston\0";
    printf("Name: %s\n",name);
    printf("City: %s\n", city);
    char test[4]="ABCD";
    printf("Test without null terminator: %s",test);
    return 0;
}