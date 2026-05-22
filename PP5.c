#include <stdio.h>

#define A 10
#define B 20

int main(){
    #if A>5
    #if B>15
    printf("Both conditions are true\n");
    #endif
    #endif
    return 0;
}
