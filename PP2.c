#include <stdio.h>
#include <math.h>

#define SQUARE(x) ((x)*(x))
#define CUBE(x) ((x)*(x)*(x))
#define SQRT(x) (sqrt(x))

int main(){
    int num=4;
    printf("Square=%d\n",SQUARE(num));
    printf("Cube=%d\n",CUBE(num));
    printf("Square Root=%f\n",SQRT(num));
    return 0;
}