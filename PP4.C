#include <stdio.h>

#define MESSAGE 10
int main(){
    #ifdef MESSAGE
    printf("Message is defined %d\n",MESSAGE);

    #else
    printf("Message is not defined\n");

    #endif
    return 0;
}