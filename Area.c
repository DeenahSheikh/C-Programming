#include <stdio.h>
int calculateArea(int length, int width);
int main() {
    int length;
    int width;
    scanf("%d %d",&length, &width);

    int result= calculateArea(length, width);
    printf("%d",result);
    return 0;
}

int calculateArea(int length, int width){
    int area=length*width;
    return area;
}