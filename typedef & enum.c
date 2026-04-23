#include <stdio.h>

typedef enum ShapeType{
    CIRCLE,
    RECTANGLE,
    TRIANGLE
}Shape;

float calculateArea(Shape shape,float dimension1, float dimension2){
    switch(shape){
        case CIRCLE:
        return 3.14159 * dimension1 *dimension1;
    
        case RECTANGLE:
        return dimension1 * dimension2;
        
        case TRIANGLE:
        return 0.5*dimension1*dimension2;

        default:
        return 0.0;

    }
}
void printShapeInfo(Shape shape){
    switch (shape){
        case CIRCLE:
        printf("Shape: Circle\n");
        break;

        case RECTANGLE:
        printf("Shape: Rectangle\n");
        break;

        case TRIANGLE:
        printf("Shape: Triangle\n");
        break;
    }
}
int main() {
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    
    Shape selectedShape=(Shape)shapeChoice;
    
    printShapeInfo(selectedShape);
    
    printf("Dimensions: %.1f %.1f\n", dim1, dim2);
    
    float area= calculateArea(selectedShape, dim1,dim2);
    printf("Area: %.2f\n",area);
    if(area<10.0){
        printf("Category: Small\n");
    }
    else if(area >= 10.0 && area <= 50.0){
        printf("Category: Medium\n");
    }
    else{
        printf("Category: Large\n");
    }
    return 0;
}