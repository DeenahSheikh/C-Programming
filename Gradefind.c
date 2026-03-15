#include <stdio.h>

float calculateAverage(int grades[], int size);
int findHighestGrade(int grades[], int size);
char determineLetterGrade(int grade);

float calculateAverage(int grades[], int size) {
    float total=0;
    for(int i=0; i<size; i++){
        total += grades[i];
    }
    float average=total/size;
    return average;
}

int findHighestGrade(int grades[], int size) {
    int max=grades[0];
    for(int i=0;i<size;i++){
        if(grades[i]>max){
            max=grades[i];
            }
        }
    return max;
}

char determineLetterGrade(int grade) {
    if(grade>=90 && grade<=100)
        return 'A';
    else if(grade>=80)
        return 'B';
    else if(grade>=70)
        return 'C';
    else if(grade>=60)
        return 'D';
    else
        return 'F';


}

int main() {
    int size;
    scanf("%d", &size);
    int grades[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &grades[i]);
    }
    
    float average = calculateAverage(grades, size);
    printf("Average grade: %.2f\n", average);
    int highest = findHighestGrade(grades, size);
    printf("Highest grade: %d\n", highest);
    printf("\nStudent Grades:\n");
    for (int i = 0; i < size; i++) {
        char letterGrade = determineLetterGrade(grades[i]);
        printf("Student %d: %d - %c\n", i+1, grades[i], letterGrade);
    }
    
    return 0;
}