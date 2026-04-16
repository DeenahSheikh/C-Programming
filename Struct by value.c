#include <stdio.h>
#include <string.h>

struct Rectangle{
    int width;
    int height;
    char color[15];
};

void displayRectangle(struct Rectangle r){
    printf("Rectangle Details:\n");
    printf("Width: %d\n",r.width);
    printf("Height: %d\n",r.height);
    printf("Color: %s\n",r.color);

    int area= r.width * r.height;
    printf("Area: %d\n", area);

}
void modifyRectangle(struct Rectangle r){
    r.width= r.width*2;
    r.height=r.height*2;
    strcpy(r.color, "Modified");

    printf("Inside modifyRectangle function:\n");
    displayRectangle(r);
}
int main() {
    int width, height;
    char color[15];
    
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%s", color);
    
    struct Rectangle rect;
    rect.width=width;
    rect.height=height;
    strcpy(rect.color,color);

    printf("Original rectangle:\n");
    displayRectangle(rect);

    modifyRectangle(rect);
    
    printf("After modifyRectangle call:\n");
    displayRectangle(rect);
    return 0;
}