#include <stdio.h>
#define NUMBER -10
int main(){
    #if NUMBER > 0
    printf("Positive Number\n");

    #else
    printf("Zero or Negative Number\n");

    #endif

    return 0;
}