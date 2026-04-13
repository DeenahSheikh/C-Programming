#include <stdio.h>

int main() {
    struct Rectangle{
        int width;
        int height;
    };

    struct Student{
        int id;
        char name[30];
        float gpa;
    };

    struct Rectangle rect1;
    struct Rectangle rect2;
    struct Student student1;
    struct Student student2;
    struct Student student3;

    printf("Rectangle variable rect1 created\n");
    printf("Rectangle variable rect2 created\n");
    printf("Student variable student1 created\n");
    printf("Student variable student2 created\n");
    printf("Student variable student3 created\n");


    printf("Total struct variables created: 5\n");
    
    printf("Memory per Rectangle: %d bytes\n", sizeof(struct Rectangle));
    printf("Memory per Student: %d bytes\n", sizeof(struct Student));
    return 0;
}