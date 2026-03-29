#include <stdio.h>

int main() {
    int *safe_ptr=NULL;
    char *char_ptr=NULL;

    if (safe_ptr==0){
        printf("safe_ptr is NULL\n");
    }
    if(char_ptr==0){
        printf("char_ptr is NULL\n");
    }

    printf("safe_ptr address: %p\n",safe_ptr);
    printf("char_ptr address: %p",char_ptr);

    return 0;
}