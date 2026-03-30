#include <stdio.h>

int main() {
    // Modify values through pointers
    // Print modified values from original variables
    int age=25;
    char grade='A';
    float temperature=98.6;

    int *age_ptr;
    char *grade_ptr;
    float *temp_ptr;

    age_ptr=&age;
    grade_ptr=&grade;
    temp_ptr=&temperature;

    printf("Age: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);
    printf("Temperature: %.1f", *temp_ptr);

    age=30;
    grade='B';
    temperature=99.5;

    printf("\nAge: %d\n", *age_ptr);
    printf("Grade: %c\n", *grade_ptr);
    printf("Temperature: %.1f\n", *temp_ptr);    

    return 0;
}